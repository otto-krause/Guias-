#include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     int a=0, b=0, p=0, ar=0;
     printf("Ingrese un lado de un rectangulo");
     scanf("%d", &a);
     printf("Ingrese otro lado");
     scanf("%d", &b);
     p=2*a+2*b;
     ar=a*b;
     system("cls");
     printf("El perímetro es %d y el área es %d", p, ar);
     return 0;
 }
