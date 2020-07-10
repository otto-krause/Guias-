   #include <stdio.h>

int main()
{
    int a=0, notas=0;
    float n=0, p=0, pg=0;

    for (a=1; a<31; a++)
    {
    printf("Ingrese las 10 notas del alumno %d \n", a);
     for (notas=1; notas<11; notas++)
     {
         scanf("%f", &n);
         p=p+n;
     }

     p=p/10;
     pg=pg+p;
     printf("El promedio del alumno %d es:\n", a);
     printf("%.1lf\n", p);
    }

    pg=pg/30;
    printf("El promedio del curso es %.1lf ", pg);
    return 0;
}
