#include <stdio.h>
void func(int *x,int *y);
int main(){
  int a=10;
  int b=9;
  func(&a,&b);
  printf("a:%d b:%d",a,b);
  return 0;
}
void func(int *x,int *y){
  *x+=*y;
  *y-=*x;
  *x+=*y;
  *y*=-1;
}
