#include<stdio.h>

int main(){
	int i=5;
	int n;
	int fn(int);
	while(i>0){
		n = fn(i);
		printf("%d!=%d\n",i,n);
		i--;
	}
	return 0;
}

int fn(int j){
	int s;
	if(j==0){
		s = 1;
	}else{
		s = j*fn(j-1);
	}
	return s;
}