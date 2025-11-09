#include <stdio.h>
int main()
{
float x,y;
printf("x= ");
scanf("%f", &x); 
printf("y= "); 
scanf("%f", &y);
float r1,r2;
r1=3;
r2=6;
if (((pow(x,2)+pow(y,2)) < pow(r2,2)) && ((pow(x,2)+pow(y,2)>pow(r1,2))) && x > 0 && y > 3 && y < -3)
printf("Принадлежит");
else 
printf("Не принадлежит");
return 0;
}