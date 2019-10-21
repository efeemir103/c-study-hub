#include <stdio.h>
int main(){
    double a,result=1.0;
    int b;
    printf("Enter base number:\n");
    scanf("%lf",&a);
    printf("Enter upper number:\n");
    scanf("%d",&b);
    for(;0<b;b--){
        result*=(double)a;
    }
    printf("Result is: %lf\n",result);
    return 0;
}