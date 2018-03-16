#include<stdio.h>
void main ()
{
  int a[10],i,n;
  printf ("enter the size array values:");
  scanf ("%d", &n);
  printf ("enter the array value:");
  for (i=0;i<n;i++)
    {
      scanf ("%d", &a[i]);
    }
  for (i=0;i<n;i++)
  {
    printf ("%d\t%d\n", a[i], i);
  }
}
