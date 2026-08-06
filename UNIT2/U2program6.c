#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value);
int pop();

int main() {
    int a, b,temp=1,i;

    printf("Enter Value A: ");
    scanf("%d", &a);
    printf("Enter Value B: ");
    scanf("%d", &b);


    push(a);
    push(b);
    b = pop();
    a = pop();

    while (b != 0) {

            temp =b;
            b=a % b;
            a=temp;
    }

    printf("\nTHE GCD IS %d\n", a);
    return 0;
}

void push(int value) {
    if (top >= MAX - 1) {
        printf("\nStack overflow\n");
    } else {
        top++;
        stack[top] = value;
    }
}

int pop() {
    if (top < 0) {
        printf("\nStack underflow\n");
        return -1;
    } else {
        int v = stack[top];
        top--;
        return v;
    }
}
