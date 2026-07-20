#include<stdio.h>

void main()

{
    int a[3],b[3],c[3],i;

    for(i=0;i<3;i++)
    {
        printf("Enter value %d of A:",i+1);
        scanf("%d",&a[i]);

    }

    for(i=0;i<3;i++)

    {
        printf("Enter value %d of B:",i+1);
        scanf("%d",&b[i]);

    }
    printf("These are the elements for C");


    for(i=0;i<3;i++)

    {
        printf("The value of c:"a[3]+b[3]);

    }

}


