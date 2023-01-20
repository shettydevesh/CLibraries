#include<stdio.h>
#include"sorting.h"
int main()
{
    int i,n,arr[n];
    int o;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    do{
        printf("\nSelect desired sorting method:\n1. Insertion\n2. Selection\n3. Merge\n4. Quick\n5. Bubble\n6. Heap\n7. Radix\n");
        scanf("\n%d",&o);
        switch(o)
        {
            case 1:
            insertionSort(arr,n);
            printf("Sorted array using insertion sort is:\n");
            for(i=0;i<n;i++)
            {
               printf("%d ",arr[i]);
            }
            break;

            case 2:
            selectionSort(arr,n);
            printf("Sorted array using selection sort is:\n");
            for(i=0;i<n;i++)
            {
               printf("%d ",arr[i]);
            }
            break;
            
            case 3:
            mergeSort(arr, 0, n - 1);
            printf("Sorted array using merge sort is:\n");
            for(i=0;i<n;i++)
            {
               printf("%d ",arr[i]);
            }
            break;
            
            case 4:
            quickSort(arr,0,n-1);
            printf("Sorted array using Quick sort is:\n");
            for(i=0;i<n;i++)
            {
               printf("%d ",arr[i]);
            }
            break;
            
            case 5:
            bubbleSort(arr,n);
            printf("Sorted array using Bubble sort is:\n");
            for(i=0;i<n;i++)
            {
               printf("%d ",arr[i]);
            }
            break;

            case 6:
            heapSort(arr,n);
            printf("Sorted array using Heap sort is:\n");
            for(i=0;i<n;i++)
            {
               printf("%d ",arr[i]);
            }
            break;

            case 7:
            radixSort(arr,n);
            printf("Sorted array using Radix sort is:\n");
            for(i=0;i<n;i++)
            {
               printf("%d ",arr[i]);
            }
            break;

            default:
            printf("Hope you liked our demo!");
            break;
        }
    }
    while(o<=7);
    return 0;
}