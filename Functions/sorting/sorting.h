#ifndef sorting_h
#define sorting_h
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
int partition (int arr[], int start, int end);
void quickSort(int arr[], int start, int end);
void bubbleSort(int arr[], int n);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);   
int getMax(int arr[], int n);
void count(int arr[], int n, int div);
void radixSort(int arr[], int n); 
#endif