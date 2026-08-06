#include<stdio.h>

int main(){
    int arr[] = {1,5,5,7,8,8,10,14,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 21;
    int left, right, sum, i, j;
    
    for(i=0; i<n-3; i++){
        if(i>0 && arr[i] == arr[i-1])
            continue;

        for(j=i+1; j<n-2; j++){
            left = j+1;
            right = n-1;
            if(j>i+1 && arr[j] == arr[j-1])
                continue;

            while(left<right){
                sum = arr[i] + arr[j] + arr[left] + arr[right];
                if(sum<target)
                    left++;

                else if(sum>target)
                    right--;

                else{
                   
                    printf("[%d %d %d %d]\n",arr[i], arr[j], arr[left], arr[right]);
                    left++;
                    right--;

                    // Skipping duplicates from left
                    while(left < right && arr[left] == arr[left-1])
                        left++;

                    // Skipping duplicates from right
                    while(left < right && arr[right] == arr[right+1])
                        right--;
                }
            }
        }
    }
}
