   #include <stdio.h>

int main()
{
    int num=0, cont=0, contn=0, cont1=0, i;
    printf("Ingrese 10 numeros\n");
    for (i=1; i<11; i++)
    {
        scanf("%d", &num);
        if (num<0)
        {
            contn=contn+1;
        }
        else
        {
            if (num>0)
            {
                cont=cont+1;
            }
            else
            {
                cont1=cont1+1;
            }
        }
    }
    printf("De los numeros ingresados %d son positivos, %d son negativos, y %d son ceros", cont, contn, cont1);

    return 0;
}
