// function pointer

#include<stdio.h>
int sum(int x,int y);
int main(){
    int call;
    int (*fp)(int, int);
    fp = sum;
    call = sum(5,4);
}

int sum(int x,int y){
    int z = x + y;
    printf("%d is the sum",z);
}