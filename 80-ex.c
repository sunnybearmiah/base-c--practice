#include<stdio.h>

int main(){
	int i=0,j,n;

	j = 1;
	while(i<5){
		n = 4*j;
		for(i=0;i<5;i++){
			if(n%4 != 0){
				break;
			}
			n = (n/4)*5+1;
		}
		j++;
	}
	
	printf("%d",n);
	return 0;
}