#include <stdio.h>

void createArr(int arr[],int size);
void printArr(int arr[],int size);
void sortArr(int arr[],int size);

int main(){
  int arr[10],size=10;
  createArr(arr,size);
  sortArr(arr,size);
  printArr(arr,size);
  return 0;
}

void createArr(int arr[],int size){
  int i;
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
}

void printArr(int arr[],int size){
  int i;
  for(i=0;i<size;i++){
    printf("Arr[%d] = [%d]\n",i,arr[i]);
  }
}

void sortArr(int arr[],int size){
//ill do this part after eating ;)
}
