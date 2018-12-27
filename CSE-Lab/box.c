#include <stdio.h>
int main(){
    int width,w,height,h;
    printf("Enter width number:\n");
    scanf("%d",&width);
    printf("Enter height number:\n");
    scanf("%d",&height);
    for(w=width;w>0;w--)
        printf("1");
    printf("\n");
    for(h=height-2;h>0;h--){
        printf("1");
        w=width-2;
        for(;w>0;w--){
            printf("0");
        }
        printf("1\n");
    }
    for(w=width;w>0;w--){
        printf("1");
    }
    printf("\n");
    return 0;
}