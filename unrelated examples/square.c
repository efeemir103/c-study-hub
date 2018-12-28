#include <stdio.h>
int main(){
  int n,w,i,j;
  scanf("%d",&n);
  for(i=n;i>0;i--){
    printf("* ");
  }
  printf("\n");
  for(i=n-2;i>0;i--){
    printf("* ");
    for(j=n-2;j>0;j--){
      printf("  ");
    }
    printf("*\n");
  }
  for(i=n;i>0;i--){
    printf("* ");
  }
  printf("\n");
  return 0;
}