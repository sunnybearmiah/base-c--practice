#include<stdio.h>
/*
num : 2
auto num : 5
num : 3
auto num : 6
num : 4
auto num : 7
*/
int main(){
	int num,i;
	num = 2;
	for(i=0;i<3;i++){
		printf("num : %d\n",num);
		num++;
		{
			static int num = 5;
			printf("auto num : %d\n",num);
			num++;
		}
	}
	return 0;
}