//函数返回数组
#include <stdio.h>
#include <stdlib.h>

int * getInput(int num){
	int (*array)[num];
	array = malloc(num * sizeof(int));
	int val,m,j;

	for (m=0; m<num; m++){	
		scanf("%d",&val);
		(*array)[m] = val;		
	}

	printf("输入的数据为：");
	for (j=0; j<num; j++){
		printf("nums: %d %d \n",j,(*array)[j]);
	}

	return *array;
}

int main(){
	int num, i, j, k;
	int *p;
	printf("参数个数：");
	scanf("%d",&num);
	if (!num || num <=3 ){
		printf("输入参数的个数不能小于3.");
		return 0;
	}

	p = getInput(num);
	printf("输入的为：");
	for (i=0; i<num; i++){
		printf("%d ",p[i]);
	}

	for (i=0; i<num; i++){
		for (j=0; j<num; j++){
			for (k=0; k<num; k++){
				if(p[i]==p[j] || p[j]==p[k] || p[i]==p[k]){
					continue;
				}
				printf("%d %d %d \n",p[i],p[j],p[k]);
			}
		}
	}
	return 0;
}