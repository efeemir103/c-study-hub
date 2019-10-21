#include <stdio.h>
void createArr(int arr[],int size);
void printArr(int arr[],int size);
void reverseArr(int arr[],int size);
int main(){
  int array[10];
  int size=10;
  createArr(array,size);
  printArr(array,size);
  reverseArr(array,size);
  printf("\nReversed:\n\n");
  printArr(array,size);
  return 0;
}
void createArr(int arr[],int size){
  int i,j,temp;
  for(i=1;i<=size;i++){
    temp=1;
    for(j=0;j<i;j++){
      temp*=2;
    }
    arr[i-1]=temp;
  }
}
void printArr(int arr[],int size){
  int i;
  for(i=0;i<size;i++){
    printf("Arr[%d] = [%d]\n",i,arr[i]);
  }
}
void reverseArr(int arr[],int size){
  int i,temp;
  for(i=0;i<size/2;i++){
    temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
  }
}
