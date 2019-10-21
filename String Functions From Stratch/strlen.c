#include <stdio.h>

int strlen(char str[]);

int main(){
  char ex[]="Electrical Engineering";
  printf("Length of ex is: %d\n",strlen(ex));
  return 0;
}

int strlen(char str[]){
  int size=0;
  while(str[size]){//if str[size] == NULL then str[size] == '\0' and '0' == 0
    size++;
  }
  return size;
}
