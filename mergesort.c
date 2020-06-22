#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int l,int mid,int h)
{
    int barr[100], i = l,j = mid+1,k = l;
    while(i<=mid && j<=h)
    {
        if(arr[i]<arr[j])
        {
            barr[k++] = arr[i++];
        }
        else
            barr[k++] = arr[j++];
    }
    for(;i<=mid;i++)
    {
        barr[k++] = arr[i];
    }
    for(;j<=h;j++)
    {
        barr[k++] = arr[j];
    }
    for(i = l ; i<= h ; i++)
    {
         arr[i] = barr[i];
    }

}
int mergesort(int arr[],int l, int h)
{
    int mid;
    if(l<h)
    {
        mid = (l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
printf("%d ", arr[i]);
printf("\n");
}
int main()
{
int arr[] = {76,43,2,6,1,0,67};
int n = sizeof(arr)/sizeof(arr[0]);
printf("Unsorted array : \n");
printArray(arr,n);

mergesort(arr, 0, n-1);
printf("The sorted array is: \n");
printArray(arr, n);
return 0;
}
