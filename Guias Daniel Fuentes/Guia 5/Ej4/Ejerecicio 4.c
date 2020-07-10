#include <stdio.h>

int main()
{
    int dia=0;
    printf("Ingrese un n%cmero del 1 al 7: ", 163);
    scanf("%d", &dia);
    switch (dia)
    {
        case 1:
            puts("El numero corresponde al dia Lunes.");
            break;
        case 2:
            puts("El numero corresponde al dia Martes.");
            break;
        case 3:
            puts("El numero corresponde al dia Miercoles.");
            break;
        case 4:
            puts("El numero corresponde al dia Jueves.");
            break;
        case 5:
            puts("El numero corresponde al dia Viernes.");
            break;
        case 6:
            puts("El numero corresponde al dia Sabado.");
            break;
        case 7:
            puts("El numero corresponde al dia Domingo.");
            break;
    }

    return 0;
}
