#include<stdio.h>
#define swap(a,b){int c;c=a;a=b;b=c;}

int main(){
	int x=1,y=5;
	printf("x=%d,y=%d\n",x,y);
	swap(x,y);
	printf("x=%d,y=%d\n",x,y);
	return 0;
}