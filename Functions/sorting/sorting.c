#include<stdio.h>
void insertionSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int j = i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void selectionSort(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int partition (int arr[], int start, int end) 
 {  
    int pivot = arr[end];  
    int i = (start - 1);  

    for (int j = start; j <= end - 1; j++){
        if (arr[j] < pivot)  
        {  
            i++;
            int t = arr[i];  
            arr[i] = arr[j];  
            arr[j] = t;  
        }  
    }  
    int t = arr[i+1];  
    arr[i+1] = arr[end];  
    arr[end] = t;  
    return (i + 1);  
}  

void quickSort(int arr[], int start, int end)
{  
    if (start < end)  
    {  
        int p = partition(arr, start, end);
        quickSort(arr, start, p - 1);  
        quickSort(arr, p + 1, end);  
    }  
}

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){                              
        int isSorted = 0;
        for(int j=0; j<n-1-i;j++){                        
            isSorted=1;
            if(arr[j]>arr[j+1]){                      
                int temp=arr[j];                      
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;   
            }
        }
        if(isSorted){
            break;
        }
    }
}

void heapify(int arr[], int n, int i)  
{  
    int largest = i;
    int left = 2 * i + 1; 
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])  
        largest = left;
    if (right < n && arr[right] > arr[largest])  
        largest = right; 
    if (largest != i) {
        int temp = arr[i];  
        arr[i] = arr[largest];  
        arr[largest] = temp;  

        heapify(arr, n, largest);  
    }  
}

void heapSort(int arr[], int n)  
{  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify(arr, n, i);  

    for (int i = n - 1; i >= 0; i--) { 
        int temp = arr[0];  
        arr[0] = arr[i];  
        arr[i] = temp;  
        heapify(arr, i, 0);  
    }  
} 

int getMax(int arr[], int n) {
    int mx = arr[0];
    int i;
    for (i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void count(int arr[], int n, int div) {
    int output[n];
    int i, count[10] = { 0 };

    for (i = 0; i < n; i++)
        count[(arr[i] / div) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / div) % 10] - 1] = arr[i];
        count[(arr[i] / div) % 10]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n) {
    int m = getMax(arr, n);

    for (int div = 1; m / div > 0; div *= 10)
        count(arr, n, div);
}
