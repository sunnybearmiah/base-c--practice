#include<stdio.h>

int main(){
	int i,j,n;
	printf("prime numbers less then 100 : \n");
	for(i=2;i<100;i++){
		n=0;
		for(j=2;j<i;j++){
			if(i%j == 0){
				n = 1;
				continue;
			}
		}
		if(n==0){
			printf("%d\n",i);
		}else{
			continue;
		}
	}
	return 0;
}