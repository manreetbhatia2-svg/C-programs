#include<stdio.h>

int main(){
  int value, i, length, value_present = 0;
  int arr[] = {1,4,5,6,3,2,4,8,6,9,2,11};
  printf("Enter the value you want to search in the array ");
  scanf("%d",&value);
  length = sizeof(arr)/sizeof(arr[0]);
  for(i=0; i<length; i++){
    if(arr[i] == value){
      printf("index of %d is %d", value, i);
      value_present = 1; // the value entered by user is present in the array 
      break;
    }
  }
  if (value_present == 0){
    printf("-1");
  }
  return 0;
}