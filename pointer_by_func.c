// function returning pointer
#include<stdio.h>
float *circle(int r, float *x, float *y);

int main(){
    int r=5;
    float area, peri;
    circle(r, &area, &peri);
    printf("Area = %.2f\n",area);
    printf("Perimeter = %.2f",peri);
}

float *circle(int r, float *x, float *y){
    *x = 3.14*r*r;
    *y = 2*3.14*r;
}
