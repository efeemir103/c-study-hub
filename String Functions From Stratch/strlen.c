#include <stdio.h>

int strlen(char str[]);

int main(){

  return 0;
}

int strlen(char str[]){
  int size=0;
  while(str[size]){//if str[size] == NULL then str[size] == '\0' and '0' == 0
    size++;
  }
  return size;
}
