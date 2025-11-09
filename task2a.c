#include <stdio.h>
#include <math.h>

int main() {
    double x, result;

    printf("Введите действительное число x: ");
    scanf("%lf", &x);

    if (x <= -2) {
        result = 0;
    } else if (x > -2 && x <= 10) {
        result = pow(x, 2) + 4 * x + 5;
    } else {
    
        if (pow(x, 2) + 4 * x - 5 == 0) {
            printf("Ошибка: Деление на ноль.\n");
            return 1;
        }
        result = 1 / (pow(x, 2) + 4 * x - 5);
    }

    printf("f(x) = %lf\n", result);

    return 0;
}