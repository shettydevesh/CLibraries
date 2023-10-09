#include<stdio.h>
#include"Sema.h"
int main()
{
    int n;
    do{
        printf("Please select a procedure\n\t1. Producer\n\t2. Consumer\n\t3. Exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            if(mutex==1 && empty!=0)
            {
                producer();
            }
            else
            {
                printf("Buffer is full. Please consume an item first\n");
            }
            break;
            
            case 2:
            if(mutex==1 && full!=0)
            {
                consumer();
            }
            else
            {
                printf("Buffer is empty. Please produce an item\n");
            }
            break;
            
            case 3:
            printf("byebye");
            break;
        }
    }    
        while(n!=3);
        return 0;
}