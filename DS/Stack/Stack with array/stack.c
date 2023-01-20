#include <stdio.h>
int top = -1, value;

void push(int stack[], int size){
    if(top == size - 1){
        printf("The stack will overflow.\n");
    }
    else{
        top++;
        printf("Enter the value you want to push: ");
        scanf("%d", &value);
        stack[top] = value;
    }
}

void pop(int stack[]){
    if(top == -1){
        printf("The stack is empty.\n");
    }
    else{
        value = stack[top];
        printf("The popped value is %d.\n", value);
        top--;
    }
}

void peek(int stack[]){
    if(top == -1){
        printf("Cant peek since the stack is empty.\n");
    }
    else{
        printf("The top-most value is %d.\n", stack[top]);
    }
}

void display(int stack[])
{
    if(top>=0)
    {
        printf("\n The elements in Stack are \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
}