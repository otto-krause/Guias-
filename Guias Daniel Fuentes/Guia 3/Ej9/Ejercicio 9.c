  #include <stdlib.h>
  #include <stdio.h>

 int main()
 {
     int a=0, b=0, c=0, h=0 ;
     char cat=' ';
     printf("ingrese la categoría y horas trabajadas");
     scanf("%c %d", &cat, &h);
     system("cls");
      if (cat=='a')
      {
         a=200*h;
         printf("El sueldo ganado es %d", a);
      }
      else
      {
          if (cat=='b')
          {
              b=180*h;
              printf("El sueldo ganado es %d", b);
          }
          else
          {
              if (cat=='c')
              {
                  c=150*h;
                  printf("El sueldo ganado es %d", c);
              }
              else
              {
                  printf("El sueldo ganado es 0");
              }
          }
      }
     return 0;
 }
