#include<stdio.h>

int main(){
    int n, value, key, flag=0, index;
    printf("Enter the length of the array ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter value for index %d: ",i);
        scanf("%d",&value);
        arr[i] = value;
    }

    printf("Enter the value you want to search: ");
    scanf("%d",&key);
    for(int j=0; j<n; j++){
        if (arr[j] == key){
            index = j;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("The value %d is present at index %d",key,index);
    else
        printf("Value not found in the array");
    
    return 0;
}