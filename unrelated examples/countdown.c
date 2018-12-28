#include <stdio.h>
int main(){
    int x;
    printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
    scanf("%d",&x);
    x--;
    while (x>0){
        printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * %d \n",x);
        x--;
    }
    return 0;
}
