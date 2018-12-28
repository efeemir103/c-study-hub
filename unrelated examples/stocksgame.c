#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct{
    int quantity;
    float value;
}stock;
typedef struct{
    char name[20];
    float balance;
    stock apples;
    stock bananas;
    stock oranges;
    stock grapes;
}player;
void updatestocks(player *p);
int main(){
    char pname[20];
    system("clear");
    printf("\t\t\t#WELCOME TO CSTOCKSGAME#\n\n\n");
    printf("\nEnter your name:");
    scanf("%s",pname);
    printf("\n\n\n");
    player p;
    strcpy(p.name,pname);
    p.apples.quantity=0;
    p.bananas.quantity=0;
    p.oranges.quantity=0;
    p.grapes.quantity=0;
    p.balance=10000;
    int roundnum=1;
    int maxround=10;
    int m,max;
    char input='0';
    updatestocks(&p);
    while(input!='E'||roundnum!=maxround+1){
        mainmenu:
            printf("\n{ROUND:%d}\n[Balance of %.2f dolars]\n\t\t\t\t[Stocks]\n[Apples:%d]\t[Bananas:%d]\n[Oranges:%d]\t[Grapes:%d]\n\n\n",roundnum,p.balance,p.apples.quantity,p.bananas.quantity,p.oranges.quantity,p.grapes.quantity);
            printf("\n\n[1]Buy stocks\t\t[2]Sell stocks\t\t[3]Pass\nEnter the option you want to select?\n\n");
            scanf(" %c",&input);
            fflush(stdin);
            if(input=='1'&&p.balance>0){
                system("clear");
                goto buymenu;
            }
            if(input=='2'&&(p.apples.quantity!=0||p.bananas.quantity!=0||p.oranges.quantity!=0||p.grapes.quantity!=0)){
                system("clear");
                goto sellmenu;
            }
            if(input=='3'){
                system("clear");
                goto pass;
            }
            if(input=='E')
                break;
            else{
                printf("\t\t\tThat is not an option.(Enter E to exit.)\n");
                goto mainmenu;
            }
        buymenu:
            printf("\n[1]Buy Apples Inc.[%f/per stock]*\t\t\t*[2]Buy Bananas Inc.[%f/per stock]\n[3]Buy Oranges Ltd.[%f/per stock]*\t\t\t*[4]Buy Grapes Co.[%f/per stock]\n(Enter 5 to go to previous menu)\n\n",p.apples.value,p.bananas.value,p.oranges.value,p.grapes.value);
            scanf(" %c",&input);
            fflush(stdin);
            if(input=='1'){
                max=(int)p.balance/p.apples.value;
                system("clear");
                printf("How much stocks you want to buy?(Max-[%d])\n",max);
                scanf("%d",&m);
                if(m<0||m>max){
                    goto buymenu;
                    system("clear");
                }
                else{
                    p.balance-=m*p.apples.value;
                    p.apples.quantity+=m;
                    goto mainmenu;
                }

            }
            if(input=='2'){
                max=(int)p.balance/p.bananas.value;
                system("clear");
                printf("How much stocks you want to buy?(Max-[%d])\n\n",max);
                scanf("%d",&m);
                if(m<0||m>max){
                    goto buymenu;
                    system("clear");
                }
                else{
                    p.balance-=m*p.bananas.value;
                    p.bananas.quantity+=m;
                    goto mainmenu;
                }
            }
            if(input=='3'){
                max=(int)p.balance/p.oranges.value;
                system("clear");
                printf("How much stocks you want to buy?(Max-[%d])\n\n",max);
                scanf("%d",&m);
                if(m<0||m>max){
                    goto buymenu;
                    system("clear");
                }
                else{
                    p.balance-=m*p.oranges.value;
                    p.oranges.quantity+=m;
                    goto mainmenu;
                }
            }
            if(input=='4'){
                max=(int)p.balance/p.grapes.value;
                system("clear");
                printf("How much stocks you want to buy?(Max-[%d])\n\n",max);
                scanf("%d",&m);
                if(m<0||m>max){
                    goto buymenu;
                    system("clear");
                }
                else{
                    p.balance-=m*p.grapes.value;
                    p.grapes.quantity+=m;
                    goto mainmenu;
                }
            }
            if(input=='5'){
                system("clear");
                goto mainmenu;
            }
            if(input=='E'){
                break;
            }
        sellmenu:
            printf("\n[1]Sell Apples Inc.[%f]*\t\t\t*[2]Sell Bananas Inc.[%f]\n[3]Sell Oranges Ltd.[%f]*\t\t\t*[4]Sell Grapes Co.[%f]\n(Enter 5 to go to previous menu)",p.apples.value,p.bananas.value,p.oranges.value,p.grapes.value);
            scanf(" %c",&input);
            fflush(stdin);
            if(input=='1'){
                max=p.apples.quantity;
                system("clear");
                printf("How much stocks you want to sell?(Max-[%d])\n",max);
                scanf("%d",&m);
                if(m<0||m>max){
                    goto buymenu;
                    system("clear");
                }
                else{
                    p.balance+=m*p.apples.value;
                    p.apples.quantity-=m;
                    goto mainmenu;
                }

            }
            if(input=='2'){
                max=p.bananas.quantity;
                system("clear");
                printf("How much stocks you want to sell?(Max-[%d])\n",max);
                scanf("%d",&m);
                if(m<0||m>max){
                    goto buymenu;
                    system("clear");
                }
                else{
                    p.balance+=m*p.bananas.value;
                    p.bananas.quantity-=m;
                    goto mainmenu;
                }
            }
            if(input=='3'){
                max=p.oranges.quantity;
                system("clear");
                printf("How much stocks you want to sell?(Max-[%d])\n",max);
                scanf("%d",&m);
                if(m<0||m>max){
                    goto buymenu;
                    system("clear");
                }
                else{
                    p.balance+=m*p.oranges.value;
                    p.oranges.quantity-=m;
                    goto mainmenu;
                }
            }
            if(input=='4'){
                max=p.grapes.quantity;
                system("clear");
                printf("How much stocks you want to sell?(Max-[%d])\n",max);
                scanf("%d",&m);
                if(m<0||m>max){
                    system("clear");
                    goto buymenu;
                }
                else{
                    p.balance+=m*p.grapes.value;
                    p.grapes.quantity-=m;
                    goto mainmenu;
                }
            }
            if(input=='5'){
                system("clear");
                goto mainmenu;
            }
            if(input=='E'){
                break;
            }
        pass:
            roundnum++;
            if(roundnum==11)
                break;
            system("clear");
            updatestocks(&p);
            continue;
    }
    p.balance+=p.apples.quantity*p.apples.value+p.bananas.quantity*p.bananas.value+p.oranges.quantity*p.grapes.value+p.grapes.quantity*p.grapes.value;
    system("clear");
    printf("--GAME OVER--\nBalance score is %f dolars :)\n",p.balance);
    return 0;
}
void updatestocks(player *p){
    srand(time(NULL));
    p->apples.value=rand()%100+1;
    p->bananas.value=rand()%100+1;
    p->oranges.value=rand()%100+1;
    p->grapes.value=rand()%100+1;
}
