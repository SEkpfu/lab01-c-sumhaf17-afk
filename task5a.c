#include <stdio.h>
#include <math.h>
const double pi= 3.1415;

int main()
{
    double a,b,r,h,c;
    double v1,v2;
    printf("r= "); 
    scanf("%lf", &r);
    printf("a= ");
    scanf("%lf", &a); 
    printf("b= "); 
    scanf("%lf", &b); 
    

    v1 = pi * r * r * h;
    v2 = a * b * c;
    
    if (v2 > v1)
    printf ("Пицца уместится");
    else
    printf("Пицца не уместится");
    return 0;
}