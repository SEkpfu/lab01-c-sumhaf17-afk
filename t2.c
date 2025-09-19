#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int number;
    printf("number=");
    scanf("%d", &number);
    int a=number/100;
    int b=(number/10)%10;
    int c=number%10;
    printf( "y=%d", a+b+c);
    printf( "y=%d", a*b*c);
    return 0;
}