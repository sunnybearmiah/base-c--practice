#include<stdio.h>

int is_prime(int n){
	for(int i=2;i<n/2+1;i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int num,i,j,k;
	int is_prime(int n);

	do{
		printf("input an even number : ");
		scanf("%d",&num);
	}while(num%2 != 0); //do..while(终止条件)

	for(i=1;i<num;i++){
		j = is_prime(i);
		k = is_prime(num-i);
		if(j && k){
			printf("偶数 %d 分解成素数 %d 和 %d\n",num,i,num-i);
			break;
		}
	}
	return 0;
}