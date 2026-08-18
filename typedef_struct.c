#include<stdio.h>

typedef struct {
    int real,img;
}complex;
complex add( complex, complex);

int main(){
    complex x,y,z;
    printf("Enter real and imaginary part of first number ");
    scanf("%d %d",&x.real, &x.img);
    printf("Enter real and imaginary part of second number  ");
    scanf("%d %d",&y.real, &y.img);
        
    z = add(x,y);
    printf("Result = %d + j%d", z.real, z.img);
    return 0;
}
complex add( complex a,  complex b){
    complex temp;
    temp.real = a.real + b.real;
    temp.img = a.img + b.img;
    return temp;
}
