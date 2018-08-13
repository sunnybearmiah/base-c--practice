#include<stdio.h>
//排序
int main(){
	int a[10];
	int i,j;
	int n;

	printf("input 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<9;i++){
		for(j=i+1;j<10;j++){
			if(a[i]>a[j]){
				n = a[i];
				a[i] = a[j];
				a[j] = n;
			}
		}
	}
	printf("sort result : ");
	for(i=0;i<10;i++){
		printf( "%d ",a[i]);
	}
	return 0;
}