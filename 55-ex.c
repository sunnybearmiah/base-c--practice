#include<stdio.h>
//~0=1 ~1=0
int main(){
	int a,b;
	a = 234;
	b = ~a;
	printf("%d\n",b);
	a = ~a;
	printf("%x\n",a);
	return 0;
}