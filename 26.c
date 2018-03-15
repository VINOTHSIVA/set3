#include<stdio.h>
void main()
{
    int n,a[3],i,add=0;
    printf("enter the array");
    scanf("%d",&n);
    printf(" enter the no of element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    add=add+a[i];    
    }
    int median=add/n;
    printf(" %d" ,median);
}
