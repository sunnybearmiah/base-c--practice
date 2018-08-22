#include<stdio.h>
#include<stdlib.h>
//反转
#define M 6

int main(){
	int a[M] = {1,2,3,4,5,6};
	int i,j,k;
	i = 0;
	j = M-1;
	while(i<j){
		k = *(a+i);
		*(a+i) = *(a+j);
		*(a+j) = k;
		i++;
		j--;
	}

	for(i=0;i<M;i++){
		printf("%d\n",*(a+i));
	}

	return 0;
	
}
