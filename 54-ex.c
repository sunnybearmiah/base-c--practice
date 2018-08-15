#include<stdio.h>

int main(){
	unsigned a,b,c,d;
	a = 36;
	b = a>>4;
	c = ~(~0<<4);
	d = b&c;
	printf("%o\n%o\n",a,d);
	return 0;
}