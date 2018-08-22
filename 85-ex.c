#include<stdio.h>

int main(){
	long int i,j,n;

	printf("input a prime number : ");
	scanf("%d",&i);

	n = 9;
	j = 1;
	while(n%i != 0){
		n = n*10+9;
		j++;
	}	

	printf("素数 %d 能被 %ld 个 9 整除",i,j);
	return 0;
}