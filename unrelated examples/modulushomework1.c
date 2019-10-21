#include <stdio.h>
int main(){
    int input;
    int i;
    scanf("%d",&input);
    while(input>=0){
        if(input%6==0||input%10==0||input%15==0){
            printf("-\n");
        }else if(input%2==0){
            printf("{%d}\n",input);
        }else if(input%3==0){
            printf("(%d)\n",input);
        }else if(input%5==0){
            printf("*%d*\n",input);
        }else{
            printf("-\n");
        }
        scanf("%d",&input);
    }
}