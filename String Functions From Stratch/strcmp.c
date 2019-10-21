#include <stdio.h>

int strcmp(char dest[],char src[]);

int main(){
  printf("Compare result is: %d\n",strcmp("abc","abd"));
  return 0;
}
 
int strcmp(char dest[],char src[]){
  int i,lengthOfDest=0,lengthOfSrc=0,minLength;
  while(dest[lengthOfDest]){
    lengthOfDest++;
  }
  while(src[lengthOfSrc]){
    lengthOfSrc++;
  }
  minLength=lengthOfDest<lengthOfSrc?lengthOfDest:lengthOfSrc;
  for(i=0;i<minLength;i++){
    if(dest[i]<src[i])
      return -1;
    if(dest[i]>src[i])
      return +1;
  }
  return 0;
}
