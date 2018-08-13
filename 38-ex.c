#include<stdio.h>

int main(){
	int i,j,sum;
	int a[3][3];

	printf("input the matrix[3][3] numbers : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}

	sum = 0;
	for(i=0;i<3;i++){
		sum = sum + a[i][i];
	}

	printf("the sum of the diagonal : %d \n",sum);

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}