#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void examine();
int randomnum(int min, int max);
int x,guess;
int maxvalue=2147483648;
int minvalue=0;
int main(){
    srand(time(NULL));
    printf("Guess a number: \n");
    scanf("%d",&x);
    examine();
    printf("End\n");
    return 0;
}  
void examine(){
   guess=randomnum(minvalue,maxvalue);
    while(x!=guess){
        if(x>guess){
            minvalue=guess;
        }else if(x<guess){
            maxvalue=guess;
        }else{
            break;
        }
        guess=randomnum(minvalue,maxvalue);
        printf("%d\n",guess);
    }
    printf("You guessed: %d\n",guess);
}
int randomnum(int min, int max){
   return rand()%(max+1-min)+min;
}