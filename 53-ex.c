#include<stdio.h>
//0^0=0 0^1=1 1^1=0

int main(){
	int a,b,c;
	a = 077;  //63  00111111
	b = 3;  //3   00000011
	c = a^b;
	printf("%d & %d = %d",a,b,c);
	return 0;
}