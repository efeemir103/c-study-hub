#include <stdio.h>
int ebob(int a,int b);
int ekok(int a,int b);
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("\nEBOB: %d; EKOK: %d\n",ebob(a,b),ekok(a,b));
  return 0;
}
int ebob(int a,int b){
  int result=1,i;
  if(a>b){
    for(i=2;i<=b;i++){
      if(a%i==0&&b%i==0){
        result=i;
      }
    }
  }else{
    for(i=2;i<=a;i++){
      if(a%i==0&&b%i==0){
        result=i;
      }
    }
  }
  return result;
}
int ekok(int a,int b){
  return a*b/ebob(a,b);
}
