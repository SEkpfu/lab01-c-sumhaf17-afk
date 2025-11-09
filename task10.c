#include <stdio.h>
int main ()
{
    double x, y, z;
    printf ("x=");
    scanf("%lf", &x);
    printf("y=");
    scanf("%lf", &y);
    printf("z=");
    scanf("%lf", &z);
    if ((x+y>z) && (z+x>y) && (z+y>x))
    printf("Треугольник существует\n");
    else 
    printf("Треугольник не существует\n");

    if ((x == y) || (y == z) || (x == z))
    printf("Треугольник равнобедренный");
        else 
     printf("Треугольник не равнобедренный");
    return 0;

}