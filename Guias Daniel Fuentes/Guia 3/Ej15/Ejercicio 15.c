   #include <stdlib.h>
   #include <stdio.h>

 int main()
 {
     int a=0, b=0, c=0;
     printf("ingrese tres números");
     scanf("%d %d %d", &a, &b, &c);
     system("cls");
     if ((c>b) && (c>a) && (b>a))
     {
         printf("Los números ingresados están en forma ascendente");
     }
     else
     {
         printf("Los números ingresados no están en forma ascendente");
     }
     return 0;
 }
