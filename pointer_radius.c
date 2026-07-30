#include<stdio.h>

int main(){
    float radius;
    float *radius_pointer = &radius;
    printf("enter radius ");
    scanf("%f",radius_pointer);
    printf("Area = %.2f",3.14*(*radius_pointer)*(*radius_pointer));
}