#include <stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a:%d,b:%d\n",a,b);
    return 0;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}