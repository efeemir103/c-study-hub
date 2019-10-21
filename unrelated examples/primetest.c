#include <stdio.h>
int primetest(int a);
int main(){
  int input;
  printf("Enter a number to test if it is a prime number: ");
  scanf("%d",&input);
  if(primetest(input)){
    printf("\nPrime\n");
  }else{
    printf("\nNot Prime\n");
  }
  return 0;
}
int primetest(int a){
  int i=a-1;
  for(;i>1;i--){
    if(a%i==0){
      return 0;
    }
  }
  return 1;
}
