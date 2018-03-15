#include<stdio.h>
#include<string.h>
void main()
{
    int a;
    printf("enter the string");
    scanf("%s",&a);
    if(a>='A' && a<='z')
    {
        printf("it is not numeric");
    }
    else
    {
        printf("it is numeric");
    }
}
