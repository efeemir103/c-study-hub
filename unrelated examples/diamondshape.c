#include <stdio.h>
int main(){ 
    int n,i,j,w;
    scanf("%d",&n);
    w=1;
    for(i=1;i<=2*n-1;i+=2){
        for(j=n-w;j>0;j--){
            printf(" ");
        }
        for(j=i;j<=2*i-1;j++){
            printf("*");
        }
        for(j=n-w;j>0;j--){
            printf(" ");
        }
        printf("\n");
        w++;
    }
    w=1;
    for(i=2*n-3;i>0;i-=2){
        for(j=0;j<w;j++){
            printf(" ");
        }
        for(j=i;j>0;j--){
            printf("*");
        }
        for(j=1;j<w;j++){
            printf(" ");
        }
        printf("\n");
        w++;
    }
}