#include<stdio.h>
/* static 修饰局部变量，在函数调用之间保持变量的值，不需要重新赋值
		  修饰全局变量，作用域在声明的文件内
i=10
n=10

i=10
n=11

i=10
n=12
*/
void fun(){	
	int i=10;
	static int n=10;
	printf("i=%d\n",i);
	printf("n=%d\n",n);
	printf("\n");
	i++;
	n++;
}

int main(){
	void fun();
	for(int i=0;i<3;i++){
		fun();
	}
	return 0;	
}