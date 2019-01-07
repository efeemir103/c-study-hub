#include <stdio.h>
int myname(char name[]){
	int i,length=0;
	for(i=0;name[i]!='\0';i++){
		length++;
		}
	return length;
}
int main(){
	char size[]="Mucahitdonmez";
	printf("%d", myname(size));
}*/
