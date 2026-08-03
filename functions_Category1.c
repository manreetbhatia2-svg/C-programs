// function with no arguments and no return value
#include<stdio.h>

void add();

int main(){
    add();
}

void add(){
    int x,y;
    printf("Enter two numbers ");
    scanf("%d %d", &x, &y);
    int z = x + y;
    printf("Sum = %d",z);
}