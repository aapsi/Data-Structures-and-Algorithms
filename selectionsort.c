#include<stdio.h>

int swap(int *x ,int *y )
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int selectionsort(int arr[],int length)
{
    int i,j,k;
    for(i = 0;i<length-1;i++)
    {
        for(j =k =i;j<length;j++)
        {
            if(arr[j]< arr[k])
            {
                k=j;
            }

        }
        swap(&arr[k],&arr[i]);
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
    selectionsort(a,n);
    printf("\n sorted array is : ");
    for(int i =0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

