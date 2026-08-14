#include <stdio.h>
#define MAX 100

int main()
{
    int a[20],i,b,n,max,min;

    printf("enter the limit:");
    scanf("%d",&n);

   for(i=0;i<n;i++)
  {
    printf("Enter the value %d:",i+1);
    scanf("%d",&a[i]);
  }
   max=a[0];
   min=a[0];

   for(i=0;i<n;i++)
   {
       if (a[i]>max)
       {
           max=a[i];
       }
   }
   printf("\n %d",max);

   for(i=0;i<n;i++)
    {
       if (a[i]<max)
       {
           min=a[i];
       }
   }
    printf("\n %d",min);
}




