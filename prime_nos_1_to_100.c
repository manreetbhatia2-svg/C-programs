#include<stdio.h>
int main(){
    int size = 1;
    int arr[50] = {};
    arr[0] = 2;
    for(int i=1; i<=100; i+=2){
        for( int j=2; j<i; j++){
            if(i%j == 0){
                break;
            }
            else if(j == i-1 && i%j !=0 ){
                arr[size] = i;
                size += 1;
            }
        }
    }
    for(int k=0; k<size; k++){
        printf("%d ", arr[k]);
    }
}

