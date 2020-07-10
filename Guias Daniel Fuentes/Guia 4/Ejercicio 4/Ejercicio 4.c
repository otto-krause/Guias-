   #include <stdio.h>

int main()
{
    int i=0, num=0, fact=1;
    printf("Ingrese un numero entero\n");
    scanf("%d", &num);
    for (i=num;i>1;i--)
    {
        fact=fact*i;
    }
        printf("El factorial de %d es  %d", num, fact);


    return 0;
}
