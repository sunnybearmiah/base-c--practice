#include<stdio.h>
//分解质因数

int main(){
	int i, n;
	printf("input a number: ");
	scanf("%d", &i);

	printf("%d=",i);
	for (n=2;n<=i;n++){
		while(i%n==0){
			printf("%d", n);
			i = i/n;
			if(i==1){
				break;
			}else{
				printf("*");
			}
		}
	}
	return 0;
}
