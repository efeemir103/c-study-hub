#include <stdio.h>
void main(){
    int a,b,c,num;
    printf("Enter 3 digit number: \n");
    scanf("%1d%1d%1d",&a,&b,&c);
    num=100*a+10*b+c;
    if(num==a+b*b+c*c*c){
        printf("%d is a disarium number.\n",num);
    }else{
        printf("%d is not a disarium number.\n",num);
    }
}