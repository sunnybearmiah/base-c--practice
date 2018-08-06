#include<stdio.h>

int main(){
	int i,y;
	float a=1,b=2;
	float sum=0;
	for(i=0;i<20;i++){
		sum = sum + b/a;
		y = a+b;
		a = b;
		b = y;
	}
	printf("sum of top20  2/1+3/2+5/3+8/5+...=%f",sum);
	return 0;
}