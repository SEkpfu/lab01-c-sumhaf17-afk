#include <stdio.h>
int main ()
{
    double x,y;
    printf("x = ");
    scanf("%lf", &x);
    printf("y= ");
    scanf("%lf", &y);
    if (x,y >= -2 && x,y <= 2)
        printf ("10 очков");
    else
            if (((x,y >= -4 && x,y <= 4) &&  (x,y <= -2 && x, y >= 2)))
                printf("5 очков");
            else
                 printf("0 очков");


    return 0;
}