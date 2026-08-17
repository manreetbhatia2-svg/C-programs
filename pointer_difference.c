#include<stdio.h>

int main(){
    int arr[] = {1,4,5,6,8,2,30};
    int *p = &arr[1];
    int *q = &arr[5];
    printf("%d",q-p);

    return 0;
}