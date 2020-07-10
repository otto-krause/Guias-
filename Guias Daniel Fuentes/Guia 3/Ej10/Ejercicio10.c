  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     int s=0, h=0, cat=0, aum=0, sfin=0;
     float adi=0;
     printf("Ingrese su sueldo, categoría a la que pertenece y la cantidad de hijos que tiene");
     scanf("%d %d %d", &s, &cat, &h);
     system("cls");
     if (h<=4)
     {
        aum=300*h;
     }
     else
     {
         aum=300*h+200;
     }

     if (cat==1)
     {
         adi=s*10/100;
         sfin=s+adi+aum;
     }
     else
     {
        if (cat==2)
        {
            adi=s*20/100;
            sfin=s+adi+aum;
        }
        else
        {
            sfin=s+aum;
        }
     }
     printf("El sueldo final es %d", sfin);
     return 0;
 }
