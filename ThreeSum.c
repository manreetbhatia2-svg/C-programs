#include<stdio.h>

int main(){
    int temp, n, j, flag=0;
    int arr[6] = {-1, 0, 1, 2, -1, -4};
    n = sizeof(arr)/sizeof(arr[0]);
    // using insertion sort to sort array
    for(int i=1; i<n; i++){
        flag = 0;
        temp = arr[i];
        for (j=i-1; j>=0; j--){       
            if(temp<arr[j]){
                arr[j+1] = arr[j];
                flag = 1;
            }
            else
                break;
        }
        if(flag ==1)
            arr[j+1] = temp;  
    }

    // 3 sum logic
    int sum, left, right;
    for(int num=0; num<n-2; num++){
        left = num+1; 
        right=n-1;

        while(left < right){
            sum = arr[left] + arr[right] + arr[num];
            if(sum<0)
                left++;
            else if(sum>0)
                right--;
            else{
                printf("[%d, %d, %d] ", arr[left], arr[right], arr[num]);
                left++;
                right--;
            }
        }
    }
}
