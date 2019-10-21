#include <stdio.h>
enum grade{f,d,c,b,a};
void main(){
   int point;
   printf("Enter your grade:\n");
   scanf("%d",&point);
   switch(point){
        case f:
            printf("Your grade is F\n");
            break;
        case d:
            printf("Your grade is D\n");
            break;
        case c:
            printf("Your grade is C\n");
            break;
        case b:
            printf("Your grade is B\n");
            break;
        case a:
            printf("Your grade is A\n");
            break;
        default:
            printf("That is not a grade\n");
   }
}