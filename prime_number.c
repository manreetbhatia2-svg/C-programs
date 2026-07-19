#include<stdio.h>
int main(){
    int num; 
    printf("Enter number ");
    scanf("%d",&num);
    if (num == 2)
        printf("Its a prime number");
    if (num==1)
        printf("1 is neither prime nor composite");

    for(int i=2; i<num; i++){
        if(num%i == 0){
            printf("Its not prime number");
            break;
        }
        else if(i == num-1 && num%i !=0){
            printf("Its a prime number");
        }
    }
}