#include<stdio.h>
#include"replace.h"
int main()
{
    int n;
    printf("\nEnter length of page reference sequence:");
    scanf("%d",&n);
    do
    {
        printf("\nPage Replacement Algorithms\n1.Enter data\n2.FIFO\n3.Optimal\n4.LRU\n5.Exit\nEnter your choice:");
        scanf("%d",&n);
        switch(n)
         {
            case 1:
            getData(n);
            break;

            case 2:
            fifo();
            break;

            case 3:
            optimal();
            break;

            case 4:
            lru();
            break;

            default:
            printf("Hope you liked our demo!");
            break;
         }
    }
    while(n<=4);
    return 0;
}