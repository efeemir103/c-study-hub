#include <stdio.h>

int strchr(char str[],char find);

int main(){
  
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
