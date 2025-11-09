#include <stdio.h>
#include <math.h>

int main() {
  double x, y;
  printf("x= ");
  scanf("%lf", &x);
  y = pow(14, 6) - pow(x, 5) + pow(x, 4) - x + 2;
  printf("y = %.31f\n", y);
  return 0;
}
