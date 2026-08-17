#include<stdio.h>
// different ways to access an element from an array using pointer
int main(){
    int a[] = {10, 20, 30, 40, 50};
    int *p = a;
    printf("%d\n",a[3]);
    printf("%d\n",p[3]);
    printf("%d\n",*(p+3));
    printf("%d",*(a+3));
}