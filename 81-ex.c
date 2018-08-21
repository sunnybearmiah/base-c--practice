#include<stdio.h>

int main(){
	long int i,j,m,n;

	for(i=10;i<100;i++){
		j = 809 * i;
		m = 8 * i;
		n = 9 * i;
		if(j != 800*i + 9*i){
			continue;
		}
		if(j>999 && j<10000 && m>9 && m<100 && n>99 && n<1000){
			printf("809 * %ld = 800 * %ld + 9 * %ld = %ld\n",i,i,i,j);
			break;
		}
	}
	return 0;
}