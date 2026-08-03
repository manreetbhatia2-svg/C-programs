// Call by value does not change actual parameters if formal parameters are changed
#include<stdio.h>
int swap(int x, int y);

int main(){
    int a=5, b=10;
    swap(a,b);
    printf("After swap\n");
    printf("a=%d, b=%d",a,b);
}

int swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x=%d, y=%d\n",x,y);
}