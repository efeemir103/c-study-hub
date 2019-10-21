#include <stdio.h>
void main(){
    int x,y,input;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&x,&y);
    printf("What operation you want to make?\n1)Addition\n2)Subtraction\n3)Multiply\n4)Divide\n5)Modulus\n");
    scanf("%d",&input);
    if(input==1){
        printf("Result is: %d\n",x+y);
    }
    else if(input==2){
        printf("Result is: %d\n",x-y);
    }
    else if(input==3){
        printf("Result is: %d\n",x*y);
    }
    else if(input==4){
        printf("Result is: %d\n",x/y);
    }
    else if(input==5){
        printf("Result is: %d\n",x%y);
    }
    else{
        printf("That is not an option.\n");
    }
}