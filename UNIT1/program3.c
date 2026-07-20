#include<stdio.h>

void main()

{
    int a[10],i,n,search,flag=0;
    printf("\n Enter Limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)

    {
        printf("Enter value at %d:",i+1);
        scanf("%d",&a[i]);

    }

    printf("\n Enter value to be searched:");
    scanf("%d",&search);

    for (i=0;i<n;i++)
    {
        if(search==a[i])
        {
            flag=1;
            printf("\n Value %d is found on position : %d",a[i],i+1);
            break;

        }
    }
    if (flag==0)
    {
        printf("\nThe value is not found!");
    }

}

