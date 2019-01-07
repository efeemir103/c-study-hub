#include <stdio.h>
#include <string.h>
void myarr(int ary[],int size){
	int i,temp;
	for(i=0;i<size/2;i++){
		temp=ary[i];
		ary[i]=ary[size-1-i];
		ary[size-1-i]=temp;
	}
	for(i=0;i<size;i++){
		printf("%d\n", ary[i]);
	}
}
int main(){
	int size,array[100],i;
	printf("Write size of array please:\n");
	scanf("%d", &size);
	printf("Write items of array please:\n");
	for(i=0;i<size;i++){
		scanf("%d", &array[i]);
	}
	printf("\nThis your array:\n");
	for(i=0;i<size;i++){
		printf("%d\n", array[i]);
	}
	printf("\n\n");
	printf("This is your reversed array:\n");
	myarr(array,size);
}
