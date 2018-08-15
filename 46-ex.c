#include<stdio.h>
#define N 10
#define SQ(x) (x)*(x)

int main(){
	int i;
	for(i=0;i<N;i++){
		printf("square %d is : %d\n",i,SQ(i));
	}
	return 0;
}