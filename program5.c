#include<stdio.h>

void main()

{
    int a[3],b[3],c[6],i,j=0;

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
        c[j]=a[i];
        j++;

    }

     for(i=0;i<3;i++)
    {

        c[j]=b[i];
        j++;

    }
    for(i=0;i<6;i++)
    {

        printf("\nOn the position %d value of %d",i+1,c[i]);

    }





}


