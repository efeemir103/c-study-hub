#include <stdio.h>
#include <string.h>

union info{
	char name[100];
	char city[100];
	int age;
	int birth;
};
void test(union info a){
	strcpy(a.name,"FARUK");
	a.birth=1999;
	strcpy(a.city,"ANTALYA");
	a.age=20;
	printf("%d", a.birth);
}
int main(){
	union info faruk;
	test(faruk);
}
