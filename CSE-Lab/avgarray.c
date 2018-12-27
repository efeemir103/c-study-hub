#include <stdio.h>
#define size 10
int main(){
  int i;
  float numbers[size];
  float result=0;
  for(i=0;i<size;i++){
    printf("Enter the %d of the number list:\n",i+1);
    scanf("%f",&numbers[i]);
    result+=numbers[i];
  }
  printf("Result is: %.4f\n", result/size);
  return 0;
}
