#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,m,j;
	int *p,i;

	printf("input the total numbers : ");
	scanf("%d",&n);

	p = malloc(n*sizeof(int));

	for(i=0;i<n;i++){
		*(p+i) = i+1;
	}

	if(n==1){
		printf("the last number : %d",*(p));
		return 0;
	}

	j = 0;
	m = n;
	while(n!=2){
		j = j+2;
		if(j+1<n){
			for(i=j;i<n-1;i++){
				*(p+i) = *(p+i+1);
			}
		}

		if(j+1 == n){
			j = 0;
		}

		if(j+1>n){
			j = n-2;
			j = abs(2-j);
			for(i=j;i<n-1;i++){
				*(p+i) = *(p+i+1);
			}
		}
		n--;
	}

	printf("the last number : %d",*(p+1));
	return 0;
}