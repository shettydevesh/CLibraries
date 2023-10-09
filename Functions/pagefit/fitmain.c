#include<stdio.h>
#include"fit.h"
void main()
{
   int n;
    do
    {
        printf("\nChoose desired page fit algo\n1. Enter Data\n2. First fit\n3. Best Fit\n4. Worst Fit\n5. Exit\nEnter yout choice:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            getData();
            break;

            case 2:
            firstfit();
            break;

            case 3:
            bestfit();
            break;

            case 4:
            worstfit();
            break;

            default:
            printf("hope you liked our demo!");
            break;
        }
    }
    while(n<=4);
}