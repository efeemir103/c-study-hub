#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* calc(int a);
int power(int x,int y);
int main(){
    int input;
    printf("Enter number you want the scientific notation of: \n");
    scanf("%d",&input);
    printf("%s\n",calc(input));
    return 0;
}
int power(int x,int y){
    if(y==1){
        return x;
    }else{
        return x*power(x,y-1);
    }
}
char* calc(int a){
    static char result[400];
    int n=0,c;
    double k;
    char num[11];
    sprintf(num,"%d",a);
    if(strlen(num)==1){
    }else{
        for(c=strlen(num);c>0;c--){
            if(c==1){
                num[c]='.';
            }
            else{
                num[c]=num[c-1];
                n++;
            }
        }
        k=atof(num);
    }
    if(n!=0){
        sprintf(result,"%f*10^%d",k,n);
        goto end;
    }else{
        sprintf(result,"%d",a);
        goto end;
    }
    end:
    return result;
}