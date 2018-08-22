#include<stdio.h>

int main(){
	int i,m,n;

	m = 0;
	for(i=1;i<=8;i++){
		if(i == 1){
			n = 4;
		}

		if(i == 2){
			n = n*7;
		}

		if(i>2){
			n = n*8;
		}
		m = m+n;
		printf("%d 位数为奇数的个数 ： %d\n",i,n);
	}
	printf("奇数总个数为 ： %d\n",m);
	return 0;
}