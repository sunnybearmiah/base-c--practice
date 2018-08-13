#include<stdio.h>

int a,b,c;
void add(){
	int a;
	a = 3;
	c = a+b;
	printf("add a : %d\n",a); //3
}

int main(){
	a = b = 4;
	add();
	printf("main a : %d\n",a); //4
	printf("value c : %d",c);  //7
	return 0;
}