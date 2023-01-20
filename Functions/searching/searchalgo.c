#include <stdio.h>
void bubbleSort(int a[], int k)
{

    for (i = 0; i < k - 1; i++)
    {
        int isSorted = 0;
        for (j = 0; j < k - 1 - i; j++)
        {
            isSorted = 1;
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            break;
        }
    }
    printf("\nSorted array is:");
    for (i = 0; i < k; i++)
    {
        printf("%d ", a[i]);
    }
}

int binary(int a[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int search(int array[], int n, int x) {
  for (int i = 0; i < n; i++){
    if (array[i] == x){
        return i;
    }
  }
  return -1;
}