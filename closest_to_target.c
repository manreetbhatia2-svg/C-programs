#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[] = {1,1,5,6,7,12}; // sorted array
    int len = sizeof(arr)/sizeof(arr[0]);
    int target, left=0, right=len-1, sum, diff, close, minDiff,closest_sum;

    // taking target as input
    printf("Enter the target value ");
    scanf("%d",&target);
    minDiff = abs(target - arr[left] - arr[right]);
    while(left < right){
        sum = arr[left] + arr[right];
        diff = abs(target - sum); 

        // checking the closest sum till now
        if (diff < minDiff){
            minDiff = diff;
            closest_sum = sum;
        }
        // checking sum with respect to target
        if(sum == target){
            printf("Yes, two numbers, %d and %d exist in the array with sum = %d ",arr[left], arr[right], target);
            return 0;
        }
        else if(sum < target )
            left++;
        else if(sum > target )
            right--;
        
    }
    printf("Closest sum to target = %d",closest_sum);
}