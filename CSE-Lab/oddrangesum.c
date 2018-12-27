#include <stdio.h>
int main(){
    int a,b,result=0;
    printf("Enter two numbers.\n");
    scanf("%d%d",&a,&b);
    for(;a<=b;a++){
        if(a%2!=0){
            result+=a;
        }
    }
    printf("%d\n",result);
    return 0;
}