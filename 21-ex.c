#include<stdio.h>

int main(){
	int i,n=1;
	for(i=0;i<9;i++){
		n = (n+1)*2;
	}
	printf("the total peach number is : %d" ,n);
	return 0;
}