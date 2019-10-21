#include <stdio.h>

char* strrev(char str[]);

int main(){
  printf("Reversed str: %s\n",strrev("Hello World!"));
  return 0;
}

char* strrev(char str[]){
  int length=0,i;
  while(str[length]){
    length++;
  }
  static char reversed[length];
  for(i=0;i<length;i++){
    reversed[i]=str[length-i-1];
  }
  return reversed;
}
