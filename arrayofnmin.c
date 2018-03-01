#include<stdio.h>
void main()
{
    int i,a[5],n,min=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }  min=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
}
