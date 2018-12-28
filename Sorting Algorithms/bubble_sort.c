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
  int i,j,temp;
  for(i=0;i<size;i++){
    for(j=0;j<size-1;j++){//checking if n varibles for minimum requires n-1 check to be sure.
      if(array[j]>array[j+1])
        temp=array[j];//we need third varible to remember the value of the variable that will be changed.
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
}
