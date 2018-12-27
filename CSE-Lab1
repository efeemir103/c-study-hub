#include <stdio.h>
struct student{
	char name[20];
	char surname[20];
	int age;	
};
int main(){
	struct student students[3];
	int i;
	for(i=0;i<3;i++){
		printf("Please enter the %d)students information:\n",i+1);
		scanf("%s %s %d",&students[i].name,&students[i].surname,&students[i].age);
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("This is the information of %d)student:%s %s %d\n",i+1,students[i].name,students[i].surname,students[i].age);
	}
	return 0;
}
