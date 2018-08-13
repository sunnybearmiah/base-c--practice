#include<stdio.h>

int main(){
	int i,cnt=0;
	printf("palindromic number : \n");
	for(i=10000;i<100000;i++){
		if((i%10 == i/10000) && (i/10%10 == i/1000%10)){
			cnt++;
			printf("%d ",i);
			if(cnt%15 == 0){
				printf("\n");
			}
		}
	}
	printf("%d",cnt);
	return 0;
}