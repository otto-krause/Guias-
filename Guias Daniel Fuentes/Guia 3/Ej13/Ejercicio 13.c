  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     float a=0, b=0, c=0;
     printf("Ingrese tres valores");
     scanf("%f %f %f", &a, &b, &c);
     if ((a==b) && (a==c) && (b==c))
     {
        printf("Los tres valores son iguales");
     }
     else
     {
         if ((a!=b) && (a!=c) && (b!=c))
         {
             printf("%f",a," y %f",b," son iguales y distintos a %f",c);
         }
         else
         {
            if ((c==b) && (a!=b) && (a!=c))
            {
                printf("%f",c," y %f",b," son iguales y distintos a %f",a);
            }
            else
            {
               if ((a==c) && (c!=b) && (a!=b))
               {
                   printf("%f",a," y %f",c," son iguales y diferentes a %f",b);
               }
            }
         }
     }
     return 0;
 }
