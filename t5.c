#include <stdio.h>
#include <math.h>

int main() {
    double x, y, result1, result2;
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    result1 = pow(1 + (1 / x), y) - 12 * x * x * y;
    result2 = x - 10 * sin(x) + fabs(pow(x, 4) - pow(x, 5));
    printf("+%.5f\n", result1);
    printf("%+e\n", result2);
    return 0;
}
