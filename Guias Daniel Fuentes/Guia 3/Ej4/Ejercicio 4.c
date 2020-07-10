  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     float p=0, f=0, s=0;
     printf("Ingrese la superficie");
     scanf("%f", &s);
     printf("Ingrese la fuerza");
     scanf("%f", &f);
     p=f/s;
     system("cls");
     printf("La presion de dicha superficie es %f",p);
     return 0;
 }
