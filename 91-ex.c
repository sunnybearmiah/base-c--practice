#include<stdio.h>
#include<time.h>

int main(){
	time_t raw_time;
	struct tm *time_info;

	time(&raw_time);
	
	time_info = localtime(&raw_time);
	
	printf("本地时间 : %s",asctime(time_info));
	return 0;
}