// function returning more than one value at a time using pointers
// pass by reference
#include<stdio.h>

void circle(int, float *, float *);

int main(){
    int r;
    float area, peri;
    printf("Enter the radius: ");
    scanf("%d",&r);
    circle(r, &area, &peri);
    printf("Area = %.2f\n",area);
    printf("Perimeter = %.2f",peri);
}

void circle(int r, float *a, float *b){
    *a = 3.14*r*r;
    *b = 2*3.14*r;
}
