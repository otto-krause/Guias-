  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     int a=0, b=0, h=0, m=0;
     printf("Ingrese cantidad de hombres");
     scanf("%d", &a);
     printf("Ingrese cantidad de mujeres");
     scanf("%d", &b);
     h=a*100/(a+b);
     m=b*100/(a+b);
     system("cls");
     printf("El porcentaje de hombres es %d", h,"%");
     printf("El porcentaje de mujeres es %d", m,"%");
     return 0;
 }
