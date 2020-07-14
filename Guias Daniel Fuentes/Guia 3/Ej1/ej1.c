#include <stdlib.h>
#include <stdio.h>

 int main()
 {
     int a=0, b=0;
     printf("Ingrese un n%cmero\n", 163);//para que no te pida el dato pegado al texto.
     scanf("%d", &a);
     printf("Ingrese otro n%cmero\n", 163);//podés utilizar solo un espacio.
     scanf("%d", &b);
     system("cls");
     printf("Los n%cmeros ingresados fueron: \n %d \n%d", 163, a, b);
     return 0;
 }
