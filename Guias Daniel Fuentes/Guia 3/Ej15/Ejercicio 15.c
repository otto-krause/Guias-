   #include <stdlib.h>
   #include <stdio.h>

 int main()
 {
     int a=0, b=0, c=0;
     printf("ingrese tres n�meros");
     scanf("%d %d %d", &a, &b, &c);
     system("cls");
     if ((c>b) && (c>a) && (b>a))
     {
         printf("Los n�meros ingresados est�n en forma ascendente");
     }
     else
     {
         printf("Los n�meros ingresados no est�n en forma ascendente");
     }
     return 0;
 }
