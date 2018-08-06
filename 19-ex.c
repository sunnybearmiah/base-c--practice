#include<stdio.h>
#define N 1000
//一个数=其因子之和

int main(){
	int i,j,n,sum;
	for(i=5; i<=N; i++){
		n = i/2;
		sum = 1;
		for(j=2; j<=n; j++){
			//i的因子
			if(i%j==0){
				sum = sum + j;
			}
		}
		if(sum == i){
			printf("%d\n",i);
		}
	}
	return 0;
}