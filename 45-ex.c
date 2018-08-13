#include<stdio.h>

int main(){
	register int i;
	int n = 0;
	for(i=0;i<=100;i++){
		n = n+i;
	}
	printf("sum n : %d\n", n);
	return 0;
}