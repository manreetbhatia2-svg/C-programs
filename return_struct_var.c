#include<stdio.h>

struct complex{
    int real,img;
};
struct complex add(struct complex, struct complex);

int main(){
    struct complex x,y,z;
    printf("Enter real and imaginary part of first number ");
    scanf("%d %d",&x.real, &x.img);
    printf("Enter real and imaginary part of second number  ");
    scanf("%d %d",&y.real, &y.img);
        
    z = add(x,y);
    printf("Result = %d + j%d", z.real, z.img);
    return 0;
}
struct complex add(struct complex a, struct complex b){
    struct complex temp;
    temp.real = a.real + b.real;
    temp.img = a.img + b.img;
    return temp;
}
