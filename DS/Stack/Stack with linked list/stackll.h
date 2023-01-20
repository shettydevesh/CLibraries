#ifndef STACKLL_H
#define STACKLL_H

typedef struct node
{
    int data;
    struct node * next;
}node;

void traversal(node *head);
int isFull(node *top);
int isEmpty(node *top);
node *push(node *top, int data);
node *pop(node *top);
void peek(node * top);

#endif
