   #include <stdio.h>

int main()
{
    int ven=0, uni=0, vnet=0, tg=0, may=0, day, i;
    for (ven=1; ven<21; ven++)
    {
    printf("Vendedor %d\n", ven);
    printf("Ingrese las unidades vendidas en:\n");
     for (day=1; day<16; day++)
     {
         printf("Dia %d ", day);
         scanf("%d", &uni);
         if (uni>may)
         {
             may=uni;
             i=ven;
         }
         vnet=vnet+uni;
     }
     tg=tg+vnet;
     printf("El total vendido del vendedor %d es:\n", ven);
     printf("%d\n", vnet);
    }
    printf("El total general es %d\n", tg);
    printf("El vendedor %d tiene la mayor venta diaria", i);
    return 0;
}
