#include<stdio.h>

int main(){
    float num1, num2, sum =0.0;
    float *pnum1 = &num1, *pnum2 = &num2, *psum = &sum;
    printf("enter 2 numbers\n ");
    scanf("%f %f", pnum1, pnum2);
    *psum = *pnum1 + *pnum2;
    printf("%.2f + %.2f = %.2f", *pnum1, *pnum2, *psum);
}