#include <stdio.h>
int main(){ 
    int n,i,w,j;
    scanf("%d",&n);
    w=n;
    for(i=n-1;i>0;i--){
        printf(" ");
    }
    for(i=n;i>0;i--){
        printf("*");
    }
    for(i=n-1;i>0;i--){
        printf(" ");
    }
    printf("\n");
    for(i=n-1;i>0;i--){
        for(j=i-1;j>0;j--){
            printf(" ");
        }
        printf("*");
        for(j=w;j>0;j--){
            printf(" ");
        }
        printf("*");
        for(j=i-1;j>0;j--){
            printf(" ");
        }
        printf("\n");
        w+=2;
        
    }
    for(i=n-2;i>0;i--){
        printf("*");
        for(j=w-2;j>0;j--){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    w-=2;
    for(i=0;i<n-1;i++){
        for(j=i;j>0;j--){
            printf(" ");
        }
        printf("*");
        for(j=w;j>0;j--){
            printf(" ");
        }
        printf("*");
        for(j=0;j<i-1;j++){
            printf(" ");
        }
        printf("\n");
        w-=2;
        
    }
    for(i=n-1;i>0;i--){
        printf(" ");
    }
    for(i=n;i>0;i--){
        printf("*");
    }
    for(i=n-1;i>0;i--){
        printf(" ");
    }
    printf("\n");
    return 0;
}