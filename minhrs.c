#include<stdio.h>
void main()
{
int min,hours,a;
printf("enter the minute");
scanf("%d",&a);
hours=a/60;
min=a%60;
printf("%d\t%d",hours,min);
}
