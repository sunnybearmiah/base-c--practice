#include<stdio.h>

int main(){
	int a[10];
	int i,j=0,k=0;
	int max,min;

	printf("input 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}

	max = a[0];
	for(i=0;i<10;i++){
		if(max<a[i]){
			max = a[i];
			j = i;
		}
	}
	a[j] = a[0];
	a[0] = max;
	
	min = a[0];
	for(i=0;i<10;i++){
		if(min>a[i]){
			min = a[i];
			k = i;
		}
	}
	a[k] = a[9];
	a[9] = min;

	printf("order result : ");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}