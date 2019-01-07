void backmyname(char name[]){
	int i,temp,length;
	length=strlen(name);
	for(i=0;i<length/2;i++){
		temp=name[i];
		name[i]=name[length-1-i];
		name[length-1-i]=temp;
	}
}
int main(){
	char text[100];
	scanf("%s", text);
	backmyname(text);
	printf("%s", (text));
}
