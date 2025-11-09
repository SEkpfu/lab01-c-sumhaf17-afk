#include <stdio.h>
int main()
{
    int number;

    printf("Введите целое число: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Число четное\n");
    } else {
        printf("Число нечетное\n");
    }

    return 0;
}