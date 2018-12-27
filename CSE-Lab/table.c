#include <stdio.h>
int main(){
    int row,column,a;
    printf("Enter values:(Row,Column)\n");
    scanf("%d%d",&row,&column);
    for(;0<row;row--){
        printf("\n");
        for(a=0;a<column;a++){
            printf("%d ",a+1);
        }
    }
    printf("\n");
    return 0;
}