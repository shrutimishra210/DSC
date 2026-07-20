#include<stdio.h>

void main()

{
    int a[20],i,pos,val,n;


        printf("enter the limit:");
        scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&a[i]);
    }

        printf("Enter position which you want to delete:");
        scanf("%d",&pos);
        pos=pos-1;

        for(i=n;i>=pos;i--)
        {
            a[i]=a[i+1];
        }

        a[pos]=val;
        for(i=0;i<n-1;i++)
        {
            printf("\n %d",a[i]);
        }

}
