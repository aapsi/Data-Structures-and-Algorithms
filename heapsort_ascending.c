#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b)
{
int t = *a;
*a = *b;
*b = t;
}

void max_heapify(int arr[],int n, int i)
{
    int largest = i;
    int l = 2*i +1;
    int r = 2*i + 2;
    if(l < n && arr[l]> arr[largest])
    {
        largest = l;
    }
    if(r< n && arr[r] > arr[largest])
       {
           largest = r;
       }
    if(largest != i)
    {
        swap(&arr[i],&arr[largest]);
        max_heapify(arr,n,largest);
    }
}

void build_max_heap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
      max_heapify(arr, n, i);
}

void heapsort(int arr[], int n)
{
    build_max_heap(arr,n);
    for(int i = n-1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        max_heapify(arr,i,0);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
      {printf("%d ", arr[i]);
      printf("\t");}
}

int main()
{
    int arr[] = {1, 12, 9, 5, 6, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array is \n");
    printArray(arr, size);
    printf("\n");

    heapsort(arr, size);

    printf("Sorted array is \n");
    printArray(arr, size);
}
