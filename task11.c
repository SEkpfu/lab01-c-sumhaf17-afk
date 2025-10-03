#include <stdio.h>
int main()
{
    int d, m, g,d1,m1,g1;
    printf("Введите день Вашего рождения:");
    scanf("%d", &d);
    printf("Введите месяц Вашего рождения:");
    scanf("%d", &m);
    printf("Введите год Вашего рождения:");
    scanf("%d", &g);
    printf("Введите текущий день:");
    scanf("%d", &d1);
    printf("Введите текущий месяц:");
    scanf("%d", &m1);
    printf("Введите текущий год:");
    scanf("%d", &g1);
    int l;
    l = g1 - g;
    if (m > m1)
    l = l - 1;
    int l1;
    l1=l % 10;
    if(g1>g)
    printf("Ошибка");
    if ((d || d1) > 31)
    printf("Ошибка");
    if ((m||m1)>12)
    printf("Ошибка");
    if(11<=l<=19)
    printf("Ваш возраст: %.0d лет", l );
    else
    if(l1 == 1)
    printf("Ваш возраст: %.0d год", l );
    else
    if(l1 == 0)
    printf("Ваш возраст: %.0d лет", l );
    else
    if(l1 >= 2 && l1 <= 4)
    printf("Ваш возраст: %.0d года", l );
    else
    if(l1 >= 5 && l1 <= 9)
    printf("Ваш возраст: %.0d лет", l );
    return 0;
}
    