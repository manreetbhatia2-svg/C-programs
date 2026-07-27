#include<stdio.h>
int main(){
    int arr[] = {1,1,2,3,4,4,4};  // sorted array
    int slow = 0, len;
    len = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<len; i++){
        if(arr[slow]!=arr[i]){
            slow+=1;
            arr[slow] = arr[i];
        }
    }

    printf("Removing duplicates\n");
    for(int j=0; j<=slow; j++)
        printf("%d ",arr[j]);
}