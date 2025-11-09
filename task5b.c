#include <stdio.h>
int main()
{
    double a,b,x,y,z;
    printf("x= "); 
    scanf("%lf", &x);
    printf("y= ");
    scanf("%lf", &y); 
    printf("z= "); 
    scanf("%lf", &z); 
    printf("a= ");
    scanf("%lf", &a); 
    printf("b= "); 
    scanf("%lf", &b); 

    if (a >= x && b >= y || a >= y && b>= x  || a >= x && b >= z ||  a>=y && b>= z || a >= z && b>=x || a>=z && b>=y)
    printf("Пройдет");
    else
    printf("Не пройдет");
    return 0;

}