// bubble sort optimized
#include<stdio.h>
#include <stdbool.h>

int main(){
    bool swapped = false;
    int x,i,j,temp;
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            printf("here\n");
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
    for(x=0;x<=n-1;x++){
        printf("%d ",arr[x]);
    }
}