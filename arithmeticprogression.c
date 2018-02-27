#include<stdio.h>
void main()
{
    int n,x,y,i,sum=0,l;
    printf("enter the no of terms:");                                                                                                                                                             
    scanf("%d",&n);
    printf("enter the starting num and diff:");
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
            l=(n*y)+x-1;
            sum=((x+l)*n)/2;
    }
    printf("\nsum of AP series:%d",sum);
}
