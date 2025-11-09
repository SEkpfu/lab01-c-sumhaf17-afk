#include <stdio.h>
#include <locale.h>
int main()

{

    setlocale(LC_ALL, "");
    double a, b, s, r, p, h;
    printf("a= ");
    scanf("%lf", &a);
    printf("b= ");
    scanf("%lf", &b);
    printf("S = %lf",a*b + b*b);
    printf("R = %lf",a*a - b*b);
    printf("P = %lf",a*a * b*b);
    printf("H = %lf",a*a / b*b);
    return 0;
}