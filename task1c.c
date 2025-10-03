#include <stdio.h>

int main() {
    double a1, b1, a2, b2, a3, b3;

    // Ввод сторон первого прямоугольника
    printf("Введите стороны 1-го прямоугольника:\n");
    printf("a1 = ");
    scanf("%lf", &a1);
    printf("b1 = ");
    scanf("%lf", &b1);

    // Ввод сторон второго прямоугольника
    printf("Введите стороны 2-го прямоугольника:\n");
    printf("a2 = ");
    scanf("%lf", &a2);
    printf("b2 = ");
    scanf("%lf", &b2);

    // Ввод сторон третьего прямоугольника
    printf("Введите стороны 3-го прямоугольника:\n");
    printf("a3 = ");
    scanf("%lf", &a3);
    printf("b3 = ");
    scanf("%lf", &b3);

    double s1 = a1 * b1;
    double s2 = a2 * b2;
    double s3 = a3 * b3;

    // Определение максимальной площади
    double max_s = s1;
    if (s2 > max_s) {
        max_s = s2;
    }
    if (s3 > max_s) {
        max_s = s3;
    }

    // Вывод максимальной площади
    printf("max площадь = %.2f\n", max_s);

    return 0;
}