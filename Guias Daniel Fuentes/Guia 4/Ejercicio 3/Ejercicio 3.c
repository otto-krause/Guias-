   #include <stdio.h>

int main()
{
    int num=0, num1=0, i=1;

    printf("Ingrese dos numeros\n");
    scanf("%d %d", &num, &num1);
    if (num<num1)
    {
        i=num+1;
        printf("Los numeros intermedios de %d y %d son:\n", num, num1);
        do
        {
            printf("%d\n", i);
            i++;
        }while(i<num1);
    }
    else
    {
        if (num1<num)
        {
            i=num1+1;
            printf("Los numeros intermedios de %d y %d son:\n", num1, num);
            do
            {
                printf("%d\n", i);
                i++;
            }while(i<num);
        }
    }

    return 0;
}
