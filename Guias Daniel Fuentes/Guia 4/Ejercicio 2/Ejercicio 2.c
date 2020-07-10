   #include <stdio.h>

int main()
{
    int i=0, num=0, num2=0;
    float p=0;
    printf("Ingresar 15 numeros \n");
    while (i<16)
    {
        scanf("%d", &num);
        p=p+num;
        if (num>num2)
        {
          num2=num;
        }
        i++;
    }
    p=p/15;
    printf("El promedio de los 15 numeros es %.1lf y el mas grande es %d", p, num2);

    return 0;
}
