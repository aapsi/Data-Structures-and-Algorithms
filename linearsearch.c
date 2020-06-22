#include<stdio.h>

int linearsearch(int *arr,int arrsize,int value )
{
    for(int i = 0;i<arrsize;i++)
    {
        if(arr[i] == value)
            return i;
    }
    return -1;
}
int main()
{
    int a[10],n,val;
    scanf("%d",&n);
    scanf("%d",&val);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The index of target element is %d.",linearsearch(a,n,val));

}
