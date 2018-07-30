#include<stdio.h>

int main(){
	int i,j,pro;
	printf("\n");
	for(i=0;i<10;i++){
		for(j=0;j<=i;j++){
			pro = i*j;
			printf("%d*%d=%-3d",i,j,pro);
		}
		printf("\n");
	}
	return 0;
}