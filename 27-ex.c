#include<stdio.h>

int main(){
	int i = 5;
	void print(int n);
	printf("input 5 characters : ");
	print(i);
	printf("\n");
	return 0;
}

void print(int n){
	char s;
	if(n==1){
		s = getchar();
		printf("reverse order : ");
		putchar(s);
	}else{
		s = getchar();
		print(n-1);
		putchar(s);
	}
}
