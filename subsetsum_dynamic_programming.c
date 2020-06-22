#include<stdio.h>

_Bool isSS(int set[], int n, int sum)
{
    _Bool subset[n][sum];
    for(int i = 0; i < n; i++)
    {
        subset[i][0] = true;
    }
    for(int i = 1; i < n; i++)
    {
        subset[0][i] = false;
        for(j= 1; j<=sum ; j++)
        {
            if(j < set[i-1])
                subset[i][j] = subset[i-1][j];
            if(j>= set[i-1])
                subset[i][j] = subset[i-1][j-set[i-1]] || subset[i-1][j];
        }
    }
    for(int i = 0; i <= n; i++)
     {
       for (int j = 0; j <= sum; j++)
          printf ("%4d", subset[i][j]);
       printf("\n");
     }

    return subset[n][sum];
}

int main()
{
    int arr[20],n,sum;
    printf("enter the number of elements : ");
    scanf("%d\n",&n);
    printf("enter the elements : \n ");
    for(int i = 0;i < n;i++)
    {
        scanf("%d\t",&arr[i]);
    }
    printf("enter the subset sum : \n");
    scanf("%d\n",&sum);
    if(isSS(arr,n,sum) == true)
        printf("found a subset that can produce the given subset sum.");
    else
        printf("no subset with given sum");
}
