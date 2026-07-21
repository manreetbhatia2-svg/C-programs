#include<stdio.h>

int main(){
    int n, value, temp, flag=0, insertion_index ;
    printf("Enter the length of the array ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter value for index %d: ",i);
        scanf("%d",&value);
        arr[i] = value;
    }
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
    printf("\nSorted array is: \n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}