#include <stdio.h> 
int main ()
{
    double a,b;
    char o;
    printf("a= ");
    scanf("%lf", &a); 
    printf("b= "); 
    scanf("%lf", &b);
    printf("Введите операцию (+,-,*): ");
    scanf(" %c", &o);
    double x;
    switch (o) {
    case '+': printf("%.2lf + %.2lf = %.2lf\n", a,b , a+b); break;
    case '-': printf("%.2lf - %.2lf = %.2lf\n", a,b , a-b); break;
    case '*': printf("%.2lf * %.2lf = %.2lf\n", a,b , a*b); break;
    default: printf("Неверная операция");
    }
    return 0; 
}