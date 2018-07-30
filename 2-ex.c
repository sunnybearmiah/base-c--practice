#include<stdio.h>
#define W 10000

int main(){
	double p;
	double b, b1, b2, b3, b4, b5;
	printf("请输入当月利润：");
	scanf("%lf",&p);

	b1 = 10*W*0.1; //10万部分
	b2 = b1 + 20*W*0.075; //20
	b3 = b2 + 40*W*0.05; //40
	b4 = b3 + 60*W*0.03; //60
	b5 = b4 + 100*W*0.015; //100
	
	if (p<=10*W) {
		b = p*0.1;
	}

	if (p>10*W && p<=20*W){

		b = b1 + (p-10*W)*0.075;
	}

	if (p>20*W && p<=40*W){
		b = b2 + (p-20*W)*0.05;
	}

	if (p>40*W && p<=60*W){
		b = b3 + (p-40*W)*0.03;
	}

	if (p>60*W && p<=100*W){
		b = b4 + (p-60*W)*0.015;
	} 

	if (p>100*W){
		b = b5 + (p-100*W)*0.01;
	}

	printf("应发奖金为：%lf",b);
	return 0;
}