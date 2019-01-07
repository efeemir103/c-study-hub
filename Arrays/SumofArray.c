#include <stdio.h>

int sumOfArray(int arr[],int size);

int main(){
  int ex[3]={1,2,3};
  printf("Sum is: %d",sumOfArray(ex,3));
  return 0;
}

int sumOfArray(int arr[],int size){
  int result=0,i;
  for(i=0;i<size;i++){
    result+=arr[i];
  }
  return result;
}
