#include <stdio.h>

int main()
{
    char cal;
    printf("Ingrese una calificaci%cn (A-F) ", 162);
    cal=getchar();
    switch (cal)
    {
        case 'A':
            puts("Excelente.");
            break;
        case 'B':
            puts("Buena.");
            break;
        case 'C':
            puts("Regular.");
            break;
        case 'D':
            puts("Suficiente.");
            break;
        case 'F':
            puts("No suficiente.");
    }

    return 0;
}
