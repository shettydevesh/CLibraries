#include<stdio.h>
int mutex=1,full=0,empty=3,x=0;
int down(int a){
    return(--a);
}
int up(int a)
{
    return(++a);
}
void producer()
{
    mutex=down(mutex);
    empty=down(empty);
    full=up(full);
    x++;
    printf("Produced item %d\n",x);
    mutex=up(mutex);
}
void consumer()
{
    mutex=down(mutex);
    full=down(full);
    empty=up(empty);
    printf("Consumed item %d\n",x);
    x--;
    mutex=up(mutex);
}