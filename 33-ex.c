#include<stdio.h>
//质数
int main(){
	int num;
	int i,n=0;

	printf("input a natural number greater then 1 : ");
	scanf("%d",&num);

	for(i=2;i<num;i++){
		if(num%i == 0){
			n = 1;
			break;
		}
	}
	if(n==1){
		printf("%d is not prime number.\n",num);
	}else{
		printf("%d is prime number.\n", num);
	}
	return 0;
}