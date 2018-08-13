#include<stdio.h>

int main(){
	int i=5;
	int get_age(int n);
	printf("The 5th man's age : %d",get_age(i));
	return 0;
}

int get_age(int n){
	int age ;
	if(n==1){
		age = 10;
		return age;
	}else{
		age = get_age(n-1);
		age = age+2;
		return age;
	}
}