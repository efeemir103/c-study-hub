#include <stdio.h>
int main(){
  int size,i,max;
  printf("Enter array size: ");
  scanf("%d",&size);
  while(size<=0){
    if(size<0){
      printf("Size cannot be negative\n");
      printf("Enter array size: ");
      scanf("%d",&size);
    }else if(size==0){
      printf("Size cannot be zero\n");
      printf("Enter array size: ");
      scanf("%d",&size);
    }else{
      break;
    }
  }
  int array[size];
  for(i=0;i<size;i++){
    printf("Enter %d element of set: \n",i+1);
    scanf("%d",&array[i]);
    if(i==0){
      max=array[i];
      continue;
    }else{
      if(max>=array[i]){
        continue;
      }else{
        max=array[i];
      }
    }
  }
  printf("Max is: %d\n",max);
  return 0;
}
