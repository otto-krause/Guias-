  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     int pob=0, pob1=0, pob2=0;
     float sup=0, sup1=0, sup2=0, den=0, den1=0, den2=0;
     printf("Ingresar la poblaci�n y la superficie en kil�metros cuadrados del primer pa�s");
     scanf("%d %f", &pob, &sup);
     printf("Lo mismo para el segundo pa�s (en el mismo orden)");
     scanf("%d %f", &pob1, &sup1);
     printf("Ingrese lo mismo para el tercer pa�s");
     scanf("%d %f", &pob2, &sup2);
     system("cls");
     den=pob/sup;
     den1=pob1/sup1;
     den2=pob2/sup2;
     if ((den>den1) && (den>den2))
     {
         printf("El primer pa�s es el m�s denso de los tres");
     }
     else
     {
         if ((den1>den) && (den1>den2))
         {
             printf("El segundo pa�s es el m�s denso");
         }
         else
         {
             if ((den2>den1) && (den2>den))
             {
                 printf("El tercer pa�s es el m�s denso");
             }
         }
     }
     return 0;
 }
