#include <stdio.h>

int main()
{
    int mes, anio;
    printf("Ingrese el a%co: ", 164);
    scanf("%d", &anio);
    printf("Ingrese un mes (1-12): ");
    scanf("%d", &mes);
    switch (mes)
    {
        case 1:
            puts("Enero posee 31 dias.");
            break;
        case 2:
            if ((anio % 4 == 0) && (anio % 100 != 0) || (anio % 400 == 0))
            {
                printf("Febrero tiene 29 dias.");
            }
            else
            {
                printf("Febrero posee 28 dias.");
            }
            break;
        case 3:
            puts("Marzo tiene 31 dias.");
            break;
        case 4:
            puts("Abril tiene 30 dias.");
            break;
        case 5:
            puts("Mayo tiene 31 dias.");
            break;
        case 6:
            puts("Junio posee 30 dias.");
            break;
        case 7:
            puts("Julio tiene 31 dias.");
            break;
        case 8:
            puts("Agosto tiene 31 dias.");
            break;
        case 9:
            puts("Septiembre posee 30 dias.");
            break;
        case 10:
            puts("Octubre posee 31 dias.");
            break;
        case 11:
            puts("Noviembre tiene 30 dias.");
            break;
        case 12:
            puts("Diciembre tiene 31 dias.");
            break;
    }

    return 0;
}
