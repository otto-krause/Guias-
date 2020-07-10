  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     int r1=0,r2=0,r3=0,r4=0,r5=0,rt=0;
     printf("Ingrese las 5 resistencias en serie");
     scanf("%d %d %d %d %d", &r1, &r2, &r3, &r4, &r5);
     rt=r1+r2+r3+r4+r5;
     system("cls");
     printf("La resistencia total es %d", rt," Ohm");
     return 0;
 }
