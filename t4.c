#include <stdio.h>
//#include <locale.h>
int main()
{
  double x, y;
  printf("x= ");
  scanf("%lf", &x);
  double x2 = x * x;
  double x4 = x2 * x2;
  double x8 = x4 * x4;
  double x10 = x8 * x2;
  double x11 = x10 * x;
  y = x11 - x + x2 - 2;
  printf("%.2lf\n", y);
  return 0;
}