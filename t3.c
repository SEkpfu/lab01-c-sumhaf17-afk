#include <stdio.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, ""); 
  int a, b, c;
  printf("a= ");
  scanf ("%d", &a);
  printf("b= ");
  scanf ("%d", &b);
  printf("c= ");
  scanf ("%d", &c);
  int summ = a * a + b * b + c * c;
  int prod = a * a * b * b * c * c;
  int max = (b > c) ? b : c;
  (b % 2 == 0) ? printf("%d %d\n", summ, prod) : printf("%d\n", max);
  return 0;
}