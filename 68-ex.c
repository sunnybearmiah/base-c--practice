#include<stdio.h>

void move(int *q,int a, int b){
	int i,last;
	int *p;

	for(i=0;i<a;i++){
		last = *(q+b-1);
		//集体右移一位
		for(p=q+b-1;p!=q;p--){
			*(p) = *(p-1);
		}
		//之前最后一位放到第一位
		*q = last;
	}
}

int main(){
	int a[10];
	int m,i;
	void move(int *p,int a,int b);

	printf("input 10 numbers : ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}

	fflush(stdin); //输入超过10个数不处理
	printf("input the offset number : ");
	scanf("%d",&m);

	if(m>=10 || m<=0){
		return 0;
	}

	// m 为偏移量
	move(a, m, 10);

	printf("after move : ");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}