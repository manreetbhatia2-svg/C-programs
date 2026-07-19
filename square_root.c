#include<stdio.h>
#include<math.h>
int main(){
    int num; 
    printf("Enter number ");
    scanf("%d",&num);
    float sqrt_num = pow(num,(0.5));
    printf("Square root of %d is %.2f", num, sqrt_num);
}