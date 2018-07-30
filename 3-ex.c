#include<stdio.h>

int main(){
	int i,j,m,n,x;
	for(i=1;i<85;i++){
		if(168%i == 0){
			j = 168/i;
			if(j<=i && i%2==0 && j%2==0 && (i+j)%2==0 && (i-j)%2==0){
				m = (i+j)/2;
				n = (i-j)/2;
				x = n*n - 100;
				printf("i value : %d \n",i);
				printf("j value : %d \n",j);
				printf("m value : %d \n",m);
				printf("n value : %d \n",n);
				printf("x value : %d \n",x);
				printf("\n");
			}
		}
	}
	return 0;
}