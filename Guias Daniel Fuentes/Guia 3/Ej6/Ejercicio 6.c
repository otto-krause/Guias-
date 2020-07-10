  #include <stdlib.h>
  #include <stdio.h>


 int main()
 {
     int a=0;
     float b=0;
     printf("Ingrese un valor entero");
     scanf("%d", &a);
     b=a/8;
     system("cls");
     printf("La octava parte de %d es %f", a, b);
     return 0;
 }
