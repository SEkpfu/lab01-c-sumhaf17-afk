#include <stdio.h>
#include <math.h>
int main ()
{
    float x,y;
    printf("x= ");
    scanf("%f", &x); 
    printf("y= "); 
    scanf("%f", &y);
    double r;
    r = 5;
    if (pow(x,2) + pow (y,2) < pow(r,2))
    printf("Принадлежит");
    else
    printf("Не принадлежит");
    return 0;

}