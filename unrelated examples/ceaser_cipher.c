#include <stdio.h>
#include <string.h>
char *encrypt(char *s);
char *decrypt(char *s);
int main(){
    char input[400];
    char temp;
    int i;
    printf("Enter your text to encrypt it with Ceaser Cipher: ");
    for(i=0;i<400;i++){
        temp=getchar();
        if(temp=='.'){
            input[i]='.';
            break;
        }else{
            input[i]=temp;
        }    
    }
    strcpy(input,encrypt(input));
    printf("%s\n",input);
    strcpy(input,decrypt(input));
    printf("%s\n",input);
}
char *encrypt(char *s){
    int a;
    static char final[400];
    for(a=0;a<strlen(s);a++){
        if(s[a]==' '&&s[a]==','&&s[a]=='.'&&s[a]=='?'&&s[a]=='!'){  
            continue; 
        }
        else{
            if(s[a]<='Z'||s[a]<='z')
                final[a]=s[a]+1;
            else if(s[a]=='Z')
                final[a]='A';
            else if(s[a]=='z')
                final[a]='a';
            else
                break;
        }
    }
    return final;
}
char *decrypt(char *s){
    int b;
    static char final[400];
    for (b=0;b<strlen(s);b++){
        if(s[b]==' '&&s[b]==','&&s[b]=='.'&&s[b]=='?'&&s[b]=='!'){
            continue;
        }
        else{
            if(s[b]!='A'&&s[b]!='a')
                final[b]=s[b]-1;
            else if(s[b]=='A')
                final[b]='Z';
            else if(s[b]=='a')
                final[b]='z';
            else
                break;
        }
    }
    return final;
}