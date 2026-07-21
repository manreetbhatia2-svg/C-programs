#include<stdio.h>

int main(){
    int n, value, key, temp;
    // taking array length
    printf("Enter the length of the array ");
    scanf("%d",&n);
    int arr[n];

    // getting elements for the array
    for(int i=0; i<n; i++){
        printf("Enter value for index %d: ",i);
        scanf("%d",&value);
        arr[i] = value;
    }

    // getting the element to be searched
    printf("Enter the element you want to search: ");
    scanf("%d",&key);

    // sorting array in ascending order
    for(int i=1; i<n; i++){
        temp = arr[i];
        int j;
        for (j=i-1; j>=0 && arr[j]>temp;j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }

    // searching the element 
    int min = 0, max = n-1, mid;
    while(min<=max){
        mid=(min+max)/2;
        if(key == arr[mid]){
            printf("%d is present at index %d of the sorted array ",key,mid);
            break;
        }
        else if (key > arr[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    if (min>max)
        printf("Element not found in the array ");

}