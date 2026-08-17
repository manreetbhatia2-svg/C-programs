#include<stdio.h>

int main(){
    int a[] = {44,58,61,24,30};
    int *p=a;
    int (*q)[5]=&a;

    printf("%p %p\n", p,q);
    printf("%d %d\n",*p,*q);
    printf("%zu %zu\n",sizeof(*p), sizeof(*q));
    printf("%d\n", (*q)[3]);
    p++;
    q++;
    printf("%p %p\n", p,q);
    printf("%d",p[2]);
}