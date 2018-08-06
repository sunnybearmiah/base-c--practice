#include<stdio.h>

//水仙花数
int main(){
	int x,y,z;
	int i;

	for (i=100;i<1000;i++){
		x = i%10; 		//个位数
		y = i/10%10;	//十位数
		z = i/100%10; 	//百位数

		if((x*x*x+y*y*y+z*z*z)==i){
			printf("%d\n",i);
		}
	}
	return 0;
}