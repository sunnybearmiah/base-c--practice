#include<stdio.h>

int main(){
	int i,n,m=0,num;
	printf("input a number : ");
	scanf("%d",&num);
	n = num;

	while(n>0){
		i = n%10;
		m = m*10 + i;
		n = n/10;
	}

	printf("reversed number : %d",m);
	return 0;
}
