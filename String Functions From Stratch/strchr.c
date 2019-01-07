#include <stdio.h>

int strchr(char str[],char find);

int main(){
  printf("Index is: %d",strchr("Hello World!",'o'));
  return 0;
}

int strchr(char str[],char find){
  int i,length;
  while(str[length]){
    length++;
  }
  for(i=0;i<length;i++){
    if(str[i]==find)
      return i;
  }
  return -1;
}
