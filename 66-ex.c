#include<stdio.h>

void swap(int *p,int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main(){
	int a,b,c;
	int *i,*j,*k;
	void swap(int *p,int *q);

	printf("input 3 numbers : ");
	scanf("%d %d %d",&a,&b,&c);

	i = &a;
	j = &b;
	k = &c;

	if(a<b){
		swap(i,j);
	}

	if(a<c){
		swap(i,k);
	}

	if(b<c){
		swap(j,k);
	}

	printf("after order desc : %d %d %d",*i,*j,*k);
	return 0;
}