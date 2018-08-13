#include<stdio.h>
//数组反转
int main(){
	int a[10] = {1,2,5,6,7,8,3,5,9,6};
	int i,n;

	printf("origin array : ");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}

	for(i=0;i<5;i++){
		n = a[i];
		a[i] = a[10-1-i];
		a[10-1-i] = n;
	}

	printf("\n");
	printf("reverse array : ");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}