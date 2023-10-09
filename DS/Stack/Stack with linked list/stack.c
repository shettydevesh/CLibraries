#include <stdio.h>
#include <stdlib.h>
#include "stackll.h"

int main()
{
    node *top = NULL;
    int choice, data;
    do
    {
        printf("\n\bWelcome to the Program\b\n");
        printf("\nMenu.\n");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n");
            printf("Enter the value you want to push: ");
            scanf("%d", &data);
            top = push(top, data);
            break;

        case 2:
            printf("\n");
            top = pop(top);
            break;

        case 3:
            printf("\n");
            traversal(top);
            break;
        
        case 4:
            peek(top);
            break;
        
        case 5:
            printf("Thank you for using the program.\n");
            break;
        
        default:
            printf("Enter a valid choice.\n");
            break;
        }
    } while (choice != 5);

    return 0;
}