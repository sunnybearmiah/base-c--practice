#include<stdio.h>

int main(){
	int a=1;
	int b=1;
	int i;
	for(i=0;i<20;i++){
		printf("%12d %12d",a*2,b*2);
		printf("\n");
		a = a+b;
		b = a+b;
	}
	return 0;
}