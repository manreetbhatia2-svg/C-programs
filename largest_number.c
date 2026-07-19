#include<stdio.h>

int main(){
    int arr[] = {4,55,122,16};
    int i,length = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for(i=1;i<=(length-2);i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("%d is the largest number",largest);
}