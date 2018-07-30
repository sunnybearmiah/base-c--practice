#include<stdio.h>

int main(){
	int x,y,z,m;

	printf("input three number : ");
	scanf("%d %d %d",&x,&y,&z);

	if(x>y){
		m = x;
		x = y;
		y = m;
	}
	if(x>z){
		m = x;
		x = z;
		z = m;
	}
	if(y>z){
		m = y;
		y = z;
		z = m;
	}

	printf("the value order : %d %d %d",x,y,z);
	return 0;
}