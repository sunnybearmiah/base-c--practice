#include<stdio.h>
#include<time.h>
//时间间隔
int main(){
	time_t start,end;
	int i;
	start = time(NULL);

	for(i=0;i<300000;i++){
		printf("*");
	}
	end = time(NULL);
	printf("时间间隔 ： %6.3f\n",difftime(end,start));
	return 0;
}