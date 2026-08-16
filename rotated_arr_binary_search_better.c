/* Given a sorted array that has been rotated at an unknown position, write 
program to search for a given target element using binary search. */

#include<stdio.h>

int binary_search(int array[], int length, int target);

int main(){
    int arr[8] = {4,5,6,7,0,1,2,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int target_index = binary_search(arr,len,target);
    if (target_index == -1)
        printf("Target value %d is not present in the array\n",target);
    else
        printf("Target value %d is present at the index %d\n",target,target_index);
}

int binary_search(int array[], int length, int target){
    int left=0, right=length-1, mid;

    while (left<=right){
        mid = (left+right)/2;

        // target = mid
        if (target == array[mid])
            return mid;
        
        // left half is sorted
        if(array[left]<=array[mid])

            // target in left half
            if(array[left]<= target && target<array[mid])
                right = mid-1;

            // target in right half
            else 
                left = mid+1;
        
        // right half is sorted 
        else
            // target in right half
            if(array[mid]<target && target<=array[right])
                left = mid+1;

            // target in left half
            else
                right = mid-1;
    }
    return -1;
}