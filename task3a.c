#include <stdio.h>
#include <math.h>
int main() {
    double x;
    double result;
    printf("Введите значение x: ");
    scanf("%lf", &x);
    if (x <= -2) {
        result = 0;
        printf("f(x) = %.2f (при x <= -2)\n", result);
    } else if (x > -2 && x <= 10) {
        result = x * x + 4 * x + 5;
        printf("f(x) = %.2f (при -2 < x <= 10)\n", result);
    } else {
        result = 1 / (x * x - 5);
        printf("f(x) = %.2f (в противном случае)\n", result);
    }
    return 0;
}