  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     int a=0, b=0, c=0, u=0;
     float h=0, m=0, s=0, sumat=0;
     printf("Ingrese hora, minutos y segundos");
     scanf("%d %d %d", &a, &b, &c);
     printf("Ingrese una unidad del 1 al 3");
     scanf("%d", &u);
     if (u==1)
     {
         h=a*3600;
         m=b*60;
         s=c;
         sumat=h+m+s;
         printf("El tiempo ingresado pasado a segundos es %f",sumat);
     }
     else
     {
         if (u=2)
         {
             h=a*60;
             m=b;
             s=c/60;
             sumat=h+m+s;
             printf("El tiempo ingresado pasado a minutos es %f",sumat);
         }
         else
         {
             if (u=3)
             {
                 h=a;
                 m=b/60;
                 s=c/3600;
                 printf("El tiempo ingresado pasado a horas es %f",sumat);
             }
         }
     }
     return 0;
 }
