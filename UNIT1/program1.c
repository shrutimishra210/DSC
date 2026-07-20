#include<stdio.h>

void main()
{

          int a[20],i,n;

          printf("enter the limit:");
          scanf("%d",&n);
          for(i=0;i<n;i++)

          {printf("Enter the number:");
          scanf("%d",&a[i]);}

          printf("these are the elements enterted");

          for(i=0;i<n;i++)

          {
              printf("\n On the position %d value is %d",i+1,a[i]);
          }

}

