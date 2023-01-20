#include <datastruct.h>
#include <stdio.h>

int choice;

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int stack[100];
    do
    {
        printf("\n1.Push.\n 2.Pop.\n 3.Peek.\n 4.Display.\n 5.Exit.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(stack, n);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            peek(stack);
            break;
        case 4:
            display(stack);
            break;
        case 5:
            printf("Thank for using the program.\n");
            break;
        default:
            printf("Enter the valid number.\n");
            break;
        }
    } while (choice != 5);
    return 0;
}