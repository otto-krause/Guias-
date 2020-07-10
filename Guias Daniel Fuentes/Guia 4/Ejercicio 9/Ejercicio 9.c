   #include <stdio.h>

int main()
{
    int suel=0, cont=0, contn=0, cont1=0, i;
    printf("Ingrese los sueldos de las 20 personas\n");
    for (i=1; i<21; i++)
    {
        printf("Persona %d ",i);
        scanf("%d", &suel);
        if (suel>2000)
        {
            cont=cont+1;
        }
        else
        {
            if (suel<2000)
            {
                cont1=cont1+1;
            }
        }
    }
    printf("De los sueldos ingresados, %d personas ganan mas de $2000, y %d personas ganan menos de esa suma", cont, cont1);

    return 0;
}
