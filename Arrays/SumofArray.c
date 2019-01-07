#include <stdio.h>

int sumOfArray(int arr[],int size);

int main(){
  
  return 0;
}

int sumOfArray(int arr[],int size){
  int result=0,i;
  for(i=0;i<size;i++){
    result+=arr[i];
  }
  return result;
}
