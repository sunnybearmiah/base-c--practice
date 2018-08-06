#include<stdio.h>
//最大公约数和最小公倍数

int main(){
	int m,n;
	int i,j;
	int x,y;
	printf("input two numbers : ");
	scanf("%d %d",&m,&n);

	if(m<n){
		j=m;
		m=n;
		n=j;
	}
	
	y = m*n;
	i = m%n;
	while(i !=0){
		if(n>i){
			m=n;
			n=i;
		}

		i=m%n;
		if(i==0){
			x = n;
		}
	}

	y = y/x;
	printf("Greatest common divisor is : %d\n",x);
	printf("Minimum common multiple is : %d\n",y);
	return 0;
}