#include <stdio.h>
int main(){
    int grade=0;
    char ans;
    printf("1-)98*23-1=?\na)3245  b)2453  c)3135  d)4325\n");
    scanf("%c",&ans);
    if(ans=='c')
        grade++;
    printf("2-)1000=mod(3)?\na)1  b)2  c)0  d)-1\n");
    scanf(" %c",&ans);
    if(ans=='a')
        grade++;
    printf("3-)3923-123=?\na)2000  b)3000  c)4000  d)3800\n");
    scanf(" %c",&ans);
    if(ans=='d')
        grade++;
    printf("4-)243+23=?\na)234  b)266  c)344  d)243\n");
    scanf(" %c",&ans);
    if(ans=='b')
        grade++;
    printf("5-)50^2=?\na)2000  b)2500  c)3000  d)3500\n");
    scanf(" %c",&ans);
    if(ans=='b')
        grade++;
    grade*=20;
    printf("Your grade is: %d\n",grade);
}