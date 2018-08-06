#include<stdio.h>

int main(){
	int i;
	double n,sum;
	n=1;
	sum=0;
	for(i=1;i<=20;i++){
		n=n*i;
		sum=sum+n;
	}
	printf("1!+2!+3!+...+20!=%Lf\n",sum);
	return 0;
}