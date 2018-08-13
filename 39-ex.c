#include<stdio.h>
#include<string.h>
//数组里加入一个元数排序
int main(){
	int a[10] = {1,3,5,9,12};
	int i,j,num;
	int len = 5;

	printf("origin array : ");
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}

	printf("\ninput a number insert into the origin array : ");
	scanf("%d",&num);

	if(a[4]<num){
		a[5] = num;
	}else{
		for(i=0;i<len;i++){
			if(a[0]>num){
				for(j=len;j>i;j--){
					a[j] = a[j-1];
				}
				a[0] = num;
				break;
			}

			if(a[i]<=num && a[i+1]>=num){
				for(j=len;j>i+1;j--){
					a[j] = a[j-1];
				}
				a[i+1] = num;
				break;
			}
		}
	}

	printf("insert result : ");
	for(i=0;i<len+1;i++){
		printf("%d ",a[i]);
	}
	return 0;
}