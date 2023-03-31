#include<stdio.h>
int main()
{
  int i,j,a[10],n,m,b=0,c=0;
  printf("Enter the number :");
  scanf("%d",&n);
  printf("Enter the values:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Given values are:");
  for(i=0;i<n;i++)
  {
    printf("\na[%d]=%d",i,a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>0)
    {
       printf("\nPositive number a[%d]=%d",i,a[i]);
       c++;
    }
    else
    {
       printf("\nNegative number a[%d]=%d",i,a[i]);
       b++;
    }
  }
  return 0;
}
