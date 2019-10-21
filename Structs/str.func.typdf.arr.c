#include <stdio.h>
#include <string.h>
typedef struct{
	char name[200];
	char surname[200];
	char city[200];
}family;
void myarr(family a[]){
	int i;
	for(i=0;i<4;i++){
		printf("Enter the information of %d) person:\n", i+1);
		scanf("%s%s%s",a[i].name,a[i].surname,a[i].city );
	}
	printf("\n\n");
	for(i=0;i<4;i++){
		printf("This is information of %d) person:\n%s  %s  %s  \n", i+1,a[i].name,a[i].surname,a[i].city);
	}
}
int main(){
	family familys[4];
	myarr(familys);
}
