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
  int min,i,j;
  for(i=0;i<size;i++){
    min=i;//allways choose current index of array as min because if it is is minimum it will not be changed with conditionals.
    for(j=0;j<size;i++){
      if(arr[i]>arr[j]){//check if current index is the minimum of array. If not then swap.
        min=j
      }
    }
    j=arr[i];//to swap two variables we need third to remember one of the variables we swap.
    arr[i]=arr[min];
    arr[min]=j;
}
