#include<stdio.h>
void main()
{
    int j,a[5],n,min=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the array:");
    for(j=1;j<=n;j++)
    {
        scanf("%d",&a[j]);
    }  min=a[1];
    for(j=1;j<=n;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
        }
    }
    printf("%d",min);
}
