#include<stdio.h>

int main(){
	int a,b,i,j,k,n;

	do{
		printf("input a 4 figures number : ");
		scanf("%d",&a);
	}while(a>9999 && a<1000);

	i = a%10;  //个
	j = a/10%10; //十
	k = a/100%10; //百
	n = a/1000; //千
	printf("%d %d %d %d\n",i,j,k,n);
	i = (i+5)%10;
	j = (j+5)%10;
	k = (k+5)%10;
	n = (n+5)%10;
	printf("%d %d %d %d\n",i,j,k,n);
	b = i*1000+j*100+k*10+n;
	printf("encryption number is : %d",b);
	return 0;
}	