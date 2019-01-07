#include <stdio.h>

int strlen(char str[]);

int main(){

  return 0;
}

int strlen(char str[]){
  int size=0;
  while(str[size]){
    size++;
  }
  return size;
}
