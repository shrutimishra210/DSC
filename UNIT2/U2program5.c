#include <stdio.h>
#define MAX 20

int stack[MAX];
int top = -1;

void push(int value);
int pop();

void main()
{
    int Base, Power, i;
    int Result=1;

    printf("Enter a Base Number: ");
    scanf("%d", &Base);

    printf("Enter a Power Number: ");
    scanf("%d", &Power);


    for (i = 1; i <=Power ; i++)
        {
        push(Base);
    }

    while (top != -1)
        {
        Result = Result * pop();
    }

    printf("\nTHE RESULT OF %d ^ %d IS %d.\n",Base,Power,Result);
    return 0;
}

void push(int value)
 {
    if (top == MAX - 1)
        {
        printf("\nStack overflow.\n");
    } else
     {
        top++;
        stack[top] = value;
    }
}

int pop()
 {
    if (top == -1)
        {
        printf("\nStack underflow.\n");
        return -1;
    }
    else
        {
        int v = stack[top];
        top--;
        return v;
    }
}


