#include <stdio.h>

int main()
{
    int mes, dia;
    printf("Ingrese el mes de su nacimiento 1-12: ");
    scanf("%d", &mes);
    printf("Ingrese ahora el d%ca de su nacimiento: ", 161);
    scanf("%d", &dia);
    switch (mes)
    {
        case 1:
            if (dia<21)
            {
                printf("Usted es Capricornio");
            }
            else
            {
                printf("Usted es Acuario");
            }
            break;
        case 2:
            if(dia>18)
            {
                printf("Usted es Piscis");
            }
            else
            {
                printf("Usted es Acuario");
            }
            break;
        case 3:
            if(dia<21)
            {
                printf("Usted es Piscis");
            }
            else
            {
                printf("Usted es Aries");
            }
            break;
        case 4:
            if(dia<21)
            {
                printf("Usted es Aries");
            }
            else
            {
                printf("Usted es Tauro");
            }
            break;
        case 5:
            if(dia<21)
            {
                printf("Usted es Tauro");
            }
            else
            {
                printf("Usted es Geminis");
            }
            break;
        case 6:
            if(dia<22)
            {
                printf("Usted es Geminis");
            }
            else
            {
                printf("Usted es Cancer");
            }
            break;
        case 7:
            if(dia<23)
            {
                printf("Usted es Cancer");
            }
            else
            {
                printf("Usted es Leo");
            }
            break;
        case 8:
            if(dia<23)
            {
                printf("Usted es Leo");
            }
            else
            {
                printf("Usted es Virgo");
            }
            break;
        case 9:
            if(dia<23)
            {
                printf("Usted es Virgo");
            }
            else
            {
                printf("Usted es Libra");
            }
            break;
        case 10:
            if(dia<23)
            {
                printf("Usted es Libra");
            }
            else
            {
                printf("Usted es Escorpio");
            }
            break;
        case 11:
            if (dia<23)
            {
                printf("Usted es Escorpio");
            }
            else
            {
                printf("Usted es Sagitario");
            }
            break;
        case 12:
            if(dia<22)
            {
                printf("Usted es Sagitario");
            }
            else
            {
                printf("Usted es Capricornio");
            }
            break;
    }

    return 0;
}
