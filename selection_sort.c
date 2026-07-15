// selection sort
#include<stdio.h>

int main()
{
    int i,j,min,x,temp,index_of_min,swapped = 0;
    int arr[] = {2,1,3,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n-1;i++)
    {   
        min = arr[i];
        swapped = 0;
        index_of_min = i;
        for(j=i+1;j<=n-1;j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                index_of_min = j;
                swapped = 1;
            }
        }
        if (swapped)
        {
        temp = arr[i];
        arr[i] = min;
        arr[index_of_min] = temp;
        }
    }
    for(x=0;x<=n-1;x++)
    {
        printf("%d ",arr[x]);
    }
}