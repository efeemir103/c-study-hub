#include <stdio.h>

int strlen(char str[]){
	int i,length=0;
	for(i=0;str[i]!='\0';i++){
		length++;
	}
	return length;
}

int main(){
	char name[]="Mucahitdonmez";
	printf("%d", strlen(name));
	return 0;
}
