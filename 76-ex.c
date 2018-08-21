#include<stdio.h>
//函数名做参数，利用函数指针
//指针函数 int *f(int x);
//函数指针 int (*f)(int x);

double even_func(int n){
	double sum = 0;
	while(n>0){
		sum = sum + (double)1/n; //必须强制转换，否则会取整
		n = n-2;
	}
	return sum;
}

double odd_func(int n){
	double sum = 0;
	while(n>0){
		sum = sum + (double)1/n;
		n = n-2;
	}
	return sum;
}

int main(){
	int num;
	double n;
	double even_func(int n);
	double odd_func(int n);
	double (*p)(int n);

	printf("input a number : ");
	scanf("%d",&num);

	if(num%2 ==0){
		p = even_func;
	}else{
		p = odd_func;
	}

	n = (*p)(num);
	printf("%lf",n);
	return 0;

}