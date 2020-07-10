   #include <stdio.h>

int main()
{
    int i=0, num=0, num1=0, pot=1;
    printf("Ingrese la base\n");
    scanf("%d", &num);
    printf("Ingrese el exponente\n");
    scanf("%d", &num1);
    do
    {
        pot=pot*num;
        i++;
    }while(i<num1);
        printf("La potencia de %d es  %d", num, pot);


    return 0;
}
