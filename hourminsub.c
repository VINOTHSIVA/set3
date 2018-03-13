#include<stdio.h>
void main()
{
int min1,hour1,min2,hour2,min,hour,total;
printf("enter the hour and min");
scanf("%d%d",&hour1,&min1);
printf("enter the secont hour and min");
scanf("%d%d",&hour2,&min2);
if(((hour1*60)+min1)>((hour2*60)+min2))
total=((hour1*60)+min1)-((hour2*60)+min2);
else
total=((hour2*60)+min2)-((hour1*60)+min1);
hour=total/60;
min=(total%60);
printf("%d\t%d",hour,min);
}

