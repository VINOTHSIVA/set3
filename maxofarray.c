#include<stdio.h>
void main()
{
    int j,a[5],n,high=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the array:");
    for(j=1;j<=n;j++)
    {
        scanf("%d",&a[j]);
    }  high=a[1];
    for(j=1;j<=n;j++)
    {
        if(a[j]>high)
        {
            high=a[j];
        }
    }
    printf("%d",high);
}
