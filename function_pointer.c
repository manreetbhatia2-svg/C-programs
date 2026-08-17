#include<stdio.h>

int sum(int, int); 
int main(){
    int call;
    int (*fp)(int , int );
    fp = sum;
    call = fp(5,3);
    printf("Sum = %d",call);
    return 0;
}

int sum(int x, int y){
    return x+y;
}