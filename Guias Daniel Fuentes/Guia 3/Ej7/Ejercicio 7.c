  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     int a=0, b=0;
     printf("Ingrese dos números");
     scanf("%d %d", &a, &b);
     system("cls");
     if (a>b)
     {
        printf("%d es mayor a %d", a, b);
     }
     else
     {
         if (a<b)
         {
             printf("%d", a," es menor a %d", b);
         }
         else{
           printf("%d", a," y %d", b, " son iguales");
         }
     }
     return 0;
 }
