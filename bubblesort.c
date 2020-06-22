#include<stdio.h>

void swapping(int *x,int *y)
{  int temp=*x;
   *x=*y;
   *y=temp;
}
void bubblesort(int arr[],int length)
{
    int i,j;
    int flag = 0;
    for(i = 0;i<length-1;i++)
    {
        for(j=0;j<length-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapping(&arr[j],&arr[j+1]);
                flag =1;
            }
        }
        if(flag == 0)
            break;
    }
}

int main()
{
    int a[10],n;
    printf("enter the length of array: ");
    scanf("%d",&n);
    printf("enter the elements in the array: ");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    printf("sorted array is: ");
    for(int i =0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
