  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     float alt=0, imc=0, p=0;
     printf("Ingrese su peso en Kg y su altura en metros");
     scanf("%f %f", &alt, &p);
     imc=p/(alt*alt);
     system("cls");
     if (imc<20)
     {
         printf("Usted está en bajo peso");
     }
     else
     {

         if (( imc>=20 ) && ( imc<=25 ))
         {
             printf("Usted tiene un peso ideal");
         }
         else
         {
             printf("Su peso esta excedido");
         }
     }
     return 0;
 }
