#include<stdio.h>
#define MAX 20

char stack[MAX],top=-1;
void Push(char value);
char Pop();

void main()
{
    int i=0;
    char str[20];

      printf("\n Enter the String: ");
      gets(str);

      while(str[i]!='\0')

      {
          Push(str[i]);
          i++;
      }
      while(top!=-1)
      {
        printf("\n%c",Pop());
      }

}
void Push(char value)
{
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
char Pop()
{
    char val;
    if (top==-1)
    {
        printf("\n Stack Underflow!");
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}

