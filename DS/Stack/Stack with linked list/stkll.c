#include <stdio.h>
#include <stdlib.h>
#include "stackll.h"



void traversal(node *head)
{
    node *ptr = malloc(sizeof(node));
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d.\n", ptr->data);
        ptr = ptr->next;
    }
}

int isFull(node *top)
{
    node *n = (node *)malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

node *push(node *top, int data)
{
    if (isFull(top))
    {
        printf("The stack will overflow.\n");
    }
    else
    {
        node *p = (node *)malloc(sizeof(node));
        p->data = data;
        p->next = top;
        top = p;
        return top;
    }
}

node *pop(node *top)
{
    int x;
    if (isEmpty(top))
    {
        printf("The stack will underflow.\n");
    }
    else
    {
        node *p = (node *)malloc(sizeof(node));
        p = top;
        x = p->data;
        top = p->next;
        free(p);
        printf("The popped element is %d.\n", x);
        return top;
    }
}

void peek(node * top){
    if (isFull(top))
    {
        printf("The stack is full.\n");
    }
    else if (isEmpty(top))
    {
        printf("The stack is empty.\n");
    }
    else
    {
        printf("The element at the top is %d.\n", top->data);
    }
    
}