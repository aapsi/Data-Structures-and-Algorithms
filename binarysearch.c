#include<stdio.h>

int binarysearch(int arr[],int l,int h, int target)
{   int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid]< target)
            l = mid+1;
        else
            h = mid-1;
    }
    return -1;
}

int recursive_binarysearch(int arr[],int l,int h,int target)
{   int mid;
    if(l<=h)
    {
        mid = (l+h)/2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid]> target)
            return recursive_binarysearch(arr,l,mid-1,target);
        else
            return recursive_binarysearch(arr,mid+1,h,target);
    }
    return -1;
}

int main()
{
    int a[50],n,val;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("enter the element to be searched : ");
    scanf("%d",&val);
    printf("enter the elements in the array: ");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the element is at index: %d", binarysearch(a,0,n,val));
    //printf("using recursive approach the index of the element is : %d", recursive_binarysearch(a,0,n,val));
}
