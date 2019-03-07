#include <stdio.h>
#define CASE 5
#define STEPS 20

unsigned long long fact(int n);

long double series();

int main(){
  printf("%Lf\n",series());
  return 0;
}

unsigned long long fact(int n){
  unsigned long long res=1;
  while(n){
    res*=n;
    n--;
  }
  return res;
}
long double series(){
  int i,j;
  long double sum=1,temp=1;
  for(i=1;i<=STEPS;i++){
    for(j=0;j<i;j++){
      temp*=CASE;
    }
    temp/=(long double)fact(i);
    if(i%2){
      sum-=temp;
    }else{
      sum+=temp;
    }
    temp=1;
  }
  return sum;
}
