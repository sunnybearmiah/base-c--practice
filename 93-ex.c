#include<stdio.h>
#include<time.h>
//
int main(){
	long i = 10000000L;
	clock_t start,finish;
	double times;
	printf("做%ld次空循环需要的时间为",i);

	start = clock();
	while(i--);
	finish = clock();
	times = (double)(finish-start) / CLOCKS_PER_SEC;

	printf("%f秒\n",times);
	return 0;
}