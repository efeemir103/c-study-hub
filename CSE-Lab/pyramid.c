#include <stdio.h>
int main(){
    int input,i;
    scanf("%d",&input);
    for(;input>0;input--){
        for(i=input;i>0;i--){
            printf("%d",input);
        }
        printf("\n");
    }
    return 0;
}