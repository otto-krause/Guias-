  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     int des=0, des1=0, des2=0, edad=0, promo=0, ivn=0, impn=0, impn1=0;
     printf("Ingrese la edad de la persona a dar el servicio");
     scanf("%d", &edad);
     system("cls");
     promo=20*50;
     ivn=promo*0.33;
     if (edad>60)
     {
         des=promo*0.30;
         impn=promo+ivn-des;
         impn1=promo-des;
    }
     else
     {
         if (edad>50)
         {
             des1=promo*0.20;
             impn=promo+ivn-des1;
             impn1=promo-des1;
         }
         else
         {
             if (edad>70)
             {
                 des2=promo*0.50;
                 impn=promo+ivn-des2;
                 impn1=promo-des2;
             }
         }
     }
     printf("El importe total con impuestos es de %d y el importe sin impuestos es de %d", impn, impn1);
     return 0;
 }
