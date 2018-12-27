#include <stdio.h>
#define size 10
int main(){
  int i;
  float numbers[size];
  float result[size];
  for(i=0;i<size;i++){
    printf("Enter the %d of the number list:\n",i+1);
    scanf("%f",&numbers[i]);
    result[i]=numbers[i]*numbers[i];
  }
  for(i=0;i<size;i++){
    printf("%d element of the list: %f\n",i+1,result[i]);
  }
  return 0;
}
