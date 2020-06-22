#include<stdio.h>

int insertionsort(int arr[], int length)
{
   int i,j,x;
   for(i = 1;i<length;i++)
   {
       j = i-1;
       x = arr[i];
       while(j>=0 && arr[j]>x)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = x;
   }
}
int main()
{
    int a[10],n;
    printf("enter the size of array : ");
    scanf("%d",&n);

    printf("\n enter the elements in the array : ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("\n sorted array is : ");
    for(int i =0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
