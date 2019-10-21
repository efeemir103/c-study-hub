#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *solve(char *s);
int checkwhitespace(char *a);
int main(){
    char input[100];
    printf("Enter your equation to solve\n(Enter in Syntax of: ax+b=c)\n");
    scanf("%s",input);
    printf("%s",solve(input));
    return 0;
}
char *solve(char *s){
    long double a,b,c;//ax+b=c
    char operation;
    static char result[100];
    sscanf(s,"%Lfx%c%Lf=%Lf",&a,&operation,&b,&c);
    if(operation=='+'){
        sprintf(result,"x=%Lf\n",(c-b)/a);
        return result;
    }else{
        sprintf(result,"x=%Lf\n",(c+b)/a);
        return result;
    }
}