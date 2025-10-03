#include <stdio.h>
int main ()
{
    float x,y;
    printf("x= ");
    scanf("%f", &x); 
    printf("y= "); 
    scanf("%f", &y);
    if ((x >= -2 && y <= 1) && (x <=0 && y >= 0))
    printf("Принадлежит");
    else
    printf("Не принадлежит");
    return 0;

}