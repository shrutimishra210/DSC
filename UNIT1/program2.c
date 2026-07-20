#include<stdio.h>

void main()
{

          int a[20],i,n,sum=0;
          float avg;

          printf("enter the limit:");
          scanf("%d",&n);

          for(i=0;i<n;i++)

          {
              printf("Enter the number %d:",i+1);
              scanf("%d",&a[i]);

              sum=sum+a[i];
          }
              avg=(float)sum/n;
              printf("\n The Addition is: %d",sum);
              printf("\n The Average is %.4f",avg);

}

