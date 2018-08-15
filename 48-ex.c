#include<stdio.h>
#define LG >
#define RG <
#define EQ ==

int main(){
	int a=5,b=6;
	printf("a=%d,b=%d\n",a,b);

	if(a LG b){
		printf("a > b\n");
	}
	if(a RG b){
		printf("a < b\n");
	}
	if(a EQ b){
		printf("a = b\n");
	}
	return 0;
}