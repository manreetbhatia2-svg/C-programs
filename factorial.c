// factorial using recursion
#include<stdio.h>
int factorial(int number);

int main(){
    int n, fact;
    printf("Enter the number ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("Factorial of %d is %d",n,fact);

}

int factorial(int number){
    int answer=1;
    if (number==0)
        return answer;
    else
        answer = number*factorial(number-1);
    }
