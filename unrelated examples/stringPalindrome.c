#include <stdio.h>
#include <string.h>
int main(){
	char a[100],b[100];
	printf("Enter the string to check if it is a palindrome:\n");
	gets(a);//gets is an unsafe function it can cause buffer overflow. Usage of fgets suggested.
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0){
		printf("\nEntered string is palindrome");
	}
	else{
		printf("\nEntered string is not palindrome");
	}
}
