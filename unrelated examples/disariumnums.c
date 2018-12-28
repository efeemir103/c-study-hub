#include <stdio.h>
#include <string.h>
int power(int x, int y);
void main(){
       int sum=0;
       int sum2=0;
       char ex[10];
       printf("Enter the number that you want to test if it is disarium or not: ");
       scanf("%s",ex);
       int length=strlen(ex);
       char a[length];
       for(int h=0;h<length;h++){
           a[h]=ex[h];
       }
       for(int i=0;i<length;i++){
           sum+=power(a[i]-'0',i+1);
       }
       for(int j=0;j<length;j++){
           sum2+=(a[j]-'0')*power(10,length-j)/10;
       }
       if(sum==sum2){
           printf("Disarium Number\n");
       }else{
           printf("Not a Disarium Number\n");
       }
}
int power(int x, int y){
     if(y==1){
        return x;
    }
    else{
        return x*power(x,y-1);
    }
}
