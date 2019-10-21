#include <stdio.h>

void createArr(int arr[],int size);
void printArr(int arr[],int size);
void sortArr(int array[],int size);

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

void sortArr(int array[],int size){
  int i,temp;
  if(size){//base case to stop infinite loop case.
    sortArr(array,size-1);//decrease the operation of checking whole over whole list two by two in order to sort the list.
  }
  for(i=size-1;i>0;i--){
    if(array[i]<array[i-1]){//if the variable after is minimum then swap. 
      temp=array[i];//we need third variable in order to store value of the variable we will change.
      array[i]=array[i-1];
      array[i-1]=temp;
    }
  }
}
