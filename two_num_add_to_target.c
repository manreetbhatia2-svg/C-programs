#include<stdio.h>
int main(){
    int arr[5] = {1,3,5,7,9};  // sorted array
    int len = sizeof(arr)/sizeof(arr[0]);
    int target, left=0, right=len, present = 0;
    int sum ;
    printf("Enter the target value ");
    scanf("%d",&target);
    while(left<right){
        sum = arr[left] + arr[right];
        if (sum == target)
        {
            printf("Yes two numbers, %d and %d exist in the array with sum = %d ",arr[left], arr[right], target);
            present = 1;
            break;
        }
        else if(sum < target)
            left += 1;
        else if(sum > target)
            right -= 1;
    }
    if (!present)
    printf("No two numbers in the array add up to %d",target);
}