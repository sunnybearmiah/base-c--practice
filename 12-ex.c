#include<stdio.h>
#include<math.h>

int main(){
	int i,j;
	int n;
	int flag = 0;

	for(i=101;i<=200;i++){
		flag = 0;
		n = ceil(sqrt(i));
		for(j=2;j<=n;j++){
			if(i%j==0){
				flag = 1;
				break;
			}
		}

		if(flag == 0){
			printf("%4d\n",i);
		}
	}
}