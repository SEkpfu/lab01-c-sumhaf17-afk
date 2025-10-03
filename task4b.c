#include <stdio.h>
int main()
{
int dM, dW;
printf("Введите дату: \n");
printf("День месяца: ");
scanf("%d", &dM);
printf("Номер дня в неделе: ");
scanf("%d", &dW);
if (13 == dM)
 if (5 == dW)
 printf("Неудачный день");
 else
 if (2 == dW)
 printf("Неудачный день");

 if (17 == dM)
 if (5 == dW)
 printf("Неудачный день");

 return 0;
}