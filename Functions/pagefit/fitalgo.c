#include <stdio.h>

int b[20], p[20], nb, np, fragment[20], i, j, temp;

void getData()
{
    printf("\nEnter the number of blocks:");

    scanf("%d", &nb);

    printf("Enter the number of processes:");

    scanf("%d", &np);

    printf("\nEnter the size of the blocks:-\n");

    for (i = 1; i <= nb; i++)

    {

        printf("Block no.%d:", i);

        scanf("%d", &b[i]);
    }

    printf("\nEnter the size of the processes :-\n");

    for (i = 1; i <= np; i++)

    {

        printf("Process no.%d:", i);

        scanf("%d", &p[i]);
    }
}
void firstfit()
{
    int flags[20], allocation[20];

    for (i = 0; i < 20; i++)

    {

        flags[i] = 0;

        allocation[i] = -1;
    }
    for (i = 0; i <= np; i++)

        for (j = 0; j <= nb; j++)

            if (flags[j] == 0 && b[j] >= p[i])

            {

                allocation[j] = i;

                flags[j] = 1;

                break;
            }

    printf("\nBlock no.\tBlock size\t\tProcess no.\t\tProcess size");

    for (i = 1; i <= nb; i++)

    {

        printf("\n%d\t\t%d\t\t", i, b[i]);

        if (flags[i] == 1)

            printf("\t%d\t\t\t%d", allocation[i], p[allocation[i]]);

        else

            printf("Not allocated");
    }
}

void bestfit()
{
    int lowest = 9999;
    static int barray[20], parray[20];

    for (i = 1; i <= np; i++)

    {

        for (j = 1; j <= nb; j++)

        {

            if (barray[j] != 1)

            {

                temp = b[j] - p[i];

                if (temp >= 0)

                    if (lowest >= temp)

                    {

                        parray[i] = j;

                        lowest = temp;
                    }
            }
        }

        fragment[i] = lowest;

        barray[parray[i]] = 1;

        lowest = 10000;
    }

    printf("\nBlock_no\tBlock_size\tProcess_no\tProcess_size\tFragment");

    for (i = 1; i <= np && parray[i]!=0; i++)
    {
            printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", parray[i], b[parray[i]], i, p[i], fragment[i]);
    }
}

void worstfit()
{
    int highest = 0;
    static int barray[20], parray[20];

    for (i = 1; i <= np; i++)

    {

        for (j = 1; j <= nb; j++)

        {

            if (barray[j] != 1)

            {

                temp = b[j] - p[i];

                if (temp >= 0)

                    if (highest <= temp)

                    {

                        parray[i] = j;

                        highest = temp;
                    }
            }
        }

        fragment[i] = highest;

        barray[parray[i]] = 1;

        highest = 0;
    }

    printf("\nBlock_no\tBlock_size\tProcess_no\tProcess_size\tFragment");

    for (i = 1; i <= np && parray[i]!=0; i++)
    {
            printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", parray[i], b[parray[i]], i, p[i], fragment[i]);
    }
}