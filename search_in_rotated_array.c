/* Given a sorted array that has been rotated at an unknown position, write 
program to search for a given target element using binary search. */

#include <stdio.h>

int main(){
    // sorting the rotated array
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 6;
    int len = sizeof(arr)/sizeof(arr[0]);
    int resume, j=0, min = arr[0], min_index = 0;
    int arr_sorted[len];
    
    for(int i=1; i<len; i++){
        if(arr[i]<min){
            min = arr[i];
            min_index = i;
        }
    }
    for(int i=0; i<len; i++){
        if ((min_index+i) < len)
            arr_sorted[i] = arr[min_index + i];
        else{
            resume = i;
            break;
        }
    }
    for(int i=resume; i<len; i++){
        arr_sorted[i] = arr[j];
        j++;
    }
    /*for(int i=0; i<len; i++){
        printf("%d",arr_sorted[i]);
    }*/
    // binary search
    int Min = 0, Max = len-1, mid, flag=0;
    while(Min<=Max){
        mid = (Min + Max)/2;
        if (target<arr_sorted[mid])
            Max = mid-1;
        else if (target>arr_sorted[mid])
            Min = mid+1;
        else if(target==arr_sorted[mid]){
            flag = 1;
            printf("%d is present",target);
            break;
        }
    }
    if(!flag)
        printf("%d is not present",target);
}