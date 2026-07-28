#include<stdio.h>
#define MAX 4

int stack[MAX],top=-1;
void Push();
void Pop();
void Peek();
void Update();
void Display();
void main()
{
    int op;
    do
    {
      printf("\n 1.Push");
      printf("\n 2.Pop");
      printf("\n 3.Peek");
      printf("\n 4.Update");
      printf("\n 5.Display");
      printf("\n 6.Exit");

      printf("\n Enter the Choice:");
      scanf("%d",&op);

      switch(op)
{
      case 1:
        Push();
        break;

      case 2:
        Pop();
        break;

      case 3:
        Peek();
        break;

      case 4:
        Update();
        break;

      case 5:
        Display();
        break;
}

    }while(op!=6);

}
void Push()
{
    int value;
    printf("\nEnter Value to be Added:");
    scanf("%d",&value);

    if (top==MAX-1)
    {
        printf("\n Stack Overflow!");
    }
    else
    {
        top++;
        stack[top]=value;
    }
}
void Pop()
{
    int val;
    if (top==-1)
    {
        printf("\n Stack Underflow!");
    }
    else
    {
        val=stack[top];
        top--;
        printf("\n Value Deleted is:%d",val);
    }
}
void Peek()
{
    if (top==-1)
    {
        printf("\n Stack is Empty!");
    }
    else
    {
        printf("\n Top Element is:%d",stack[top]);
    }
}
void Update()
{
    int i,x;

    printf("\n Enter Index:");
    scanf("%d",&i);

    printf("\n Enter New Value:");
    scanf("%d",&x);

    if(top-i+1<=-1)
    {
        printf("\n Invalid Index!");
    }
    else
    {
        stack[top-i+1]=x;
    }
}
void Display()
{
    int i;
    if(top==-1)
    {
       printf("\n Stack is Empty!");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
             printf("\n %d",stack[i]);
        }
    }
}
