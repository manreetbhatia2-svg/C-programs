#include<stdio.h>

int main(){
    int temp, num, num_rev = 0; 
    printf("Enter number ");
    scanf("%d",&num);
    temp = num;
    while (temp>0){
        num_rev = num_rev*10 + temp%10;
        temp = temp/10;
    }
    if(num == num_rev)
        printf("The number is in palindrome");
    else
        printf("The number is not in palindrome");
}