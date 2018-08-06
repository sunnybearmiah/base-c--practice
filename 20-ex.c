#include<stdio.h>

int main(){
	float i,j,s;
	float h=100;
	s=h;
	for(i=0;i<10;i++){
		s = s + h;
		h = h/2;
	}
	printf("the 10th times rebund height is : %f m",h);
	printf("the 10th times total run : %f m",s);
	return 0;
}