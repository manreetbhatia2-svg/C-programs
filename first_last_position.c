/*Given an array of integers nums sorted in non-decreasing order,
find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].*/

#include<stdio.h>
#include<stdlib.h>
int* searchRange(int* nums, int numsSize, int target);

int main(){
    int target, *output;
    int nums[] = {5,7,7,8,8,10};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    printf("Enter target ");
    scanf("%d",&target);
    output = searchRange(nums, numsSize, target);
    for(int i=0; i<2; i++)
        printf("%d ",output[i]);
}

int* searchRange(int* nums, int numsSize, int target){
    int start=-1, end=-1; 
    for(int i=0; i<numsSize; i++){
        if (nums[i] == target && start==-1){
            start = i;
            end = i;
        }
        if (nums[i] == target){
            end = i;
        }
    }
    int* ans = malloc(2 * sizeof(int));  
    ans[0] = start;
    ans[1] = end;
    return ans;
}