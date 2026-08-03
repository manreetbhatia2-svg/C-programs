#include<stdio.h>
#include <stdbool.h>
int bubble_sort(int arr[], int n);
int selection_sort(int arr[], int n);
int insertion_sort(int arr[], int n);
int main(){
    int arr[5] = {4,8,6,2,7};
    int n =5;

    bubble_sort(arr, n);
    selection_sort(arr,n);
    insertion_sort(arr,n);
}
// bubble sort 
int bubble_sort(int arr[], int n){
    bool swapped = false;
    int x,i,j,temp;

    for (i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (arr[j]> arr[j+1]){   
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped){
            break;
        }
    }
    printf("\nSorted the array using bubble sort : \n");
    for(x=0;x<=n-1;x++){
        printf("%d ",arr[x]);
    }
}

// selection sort
int selection_sort(int arr[], int n){
    int i,j,min,x,temp,index_of_min,swapped = 0;
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
    printf("\nSorted the array using selection sort : \n");
    for(x=0;x<=n-1;x++)
    {
        printf("%d ",arr[x]);
    }
}

// insertion sort
int insertion_sort(int arr[], int n){
    int  value, temp, flag=0, insertion_index ;
    for (int i=1; i<n ;i++){
        temp = arr[i];
        flag = 0;
        for(int j=i-1; j>=0; j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];
                insertion_index = j;
                flag = 1;
            }
            else
                break;
        }
        if(flag != 0){
            arr[insertion_index] = temp;
        }
    }
    printf("\nSorted the array using insertion sort : \n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}