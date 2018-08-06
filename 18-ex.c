#include<stdio.h>

int main(){
	int a,n;
	int s=0,m;
	printf("input a base number and a count number: ");
	scanf("%d %d",&a,&n);
	m=a;
	while(n>0){ 
		s=s+m;
		a=a*10;
		m=m+a;
		n--;
	}
	printf("a+aa+aaa+...=%d",s);
	return 0;
}