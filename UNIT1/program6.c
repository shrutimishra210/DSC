#include<stdio.h>

void main()

{
    int a[10],i,largest;

    for(i=0;i<10;i++)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&a[i]);

    }

      largest=a[0];
      for(i=0;i<10;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }

        printf("\nLargest Element is:%d",largest);




}



