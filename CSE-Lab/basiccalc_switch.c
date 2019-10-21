#include <stdio.h>
void main(){
    int x,y,input;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&x,&y);
    printf("What operation you want to make?\n1)Addition\n2)Subtraction\n3)Multiply\n4)Divide\n5)Modulus\n");
    scanf("%d",&input);
    switch(input){
        case 1:
            printf("Result is: %d\n",x+y);
            break;
        case 2:
            printf("Result is: %d\n",x-y);
            break;
        case 3:
            printf("Result is: %d\n",x*y);
            break;
        case 4:
            printf("Result is: %d\n",x/y);
            break;
        case 5:
            printf("Result is: %d\n",x%y);
            break;
        default:
            printf("That is not an option.");
    }
}