// bubble sort standard
#include<stdio.h>

int main(){
    int x,i,j,temp;
    int arr[] = {1,4,6,2,3,2,5,9,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (arr[j]> arr[j+1]){   
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(x=0;x<=n-1;x++){
        printf("%d ",arr[x]);
    }
}