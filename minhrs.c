#include<stdio.h>
void main()
{
int min,hours,x;
printf("enter the minute");
scanf("%d",&x);
hours=x/60;
min=x%60;
printf("%d\t%d",hours,min);
}
