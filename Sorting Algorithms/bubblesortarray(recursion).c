#include <stdio.h>

void createArr(int *arr,int size);
void printArr(int *arr,int size);
void sortArr(int array[],int size);

int main(){
  int arr[10],size=10;
  createArr(arr,size);
  sortArr(arr,size);
  printArr(arr,size);
  return 0;
}

void createArr(int *arr,int size){
  int i;
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
}

void printArr(int *arr,int size){
  int i;
  for(i=0;i<size;i++){
    printf("Arr[%d] = [%d]\n",i,arr[i]);
  }
}

void sortArr(int array[],int size){
  int i,temp;
  if(size){
    sortArr(array,size-1);
  }
  for(i=size-1;i>0;i--){
    if(array[i]<array[i-1]){
      temp=array[i];
      array[i]=array[i-1];
      array[i-1]=temp;
    }
  }
}
