#include<stdio.h>
#include"search.h"
void main()
{
    int ch,x,res;
    do
    {
        printf("\nSearching alorithms\n1. Enter Data\n2. Enter element\n3. Linear Search\n4. Binary Search\n5. Exit\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            getarr();
            break;

            case 2:
            printf("Enter element to be searched: ");
            scanf("%d",&x);
            break;

            case 3:
            linear(a,x);
            break;

            case 4:
            bubbleSort(a,k);
            res=binary(a,x,0,k-1);
            if (res == -1)
            printf("\nNot found");
            else
            printf("\nElement is found at index %d", res);
            break;

            default:
            printf("Hope you liked our demo!");
            break;

        }
    }
    while(ch<=4);
}