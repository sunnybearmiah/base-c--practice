#include<stdio.h>

int main(){
	int num,i=1,j;
	
	do{
		printf("input the %dth number : ",i);
		scanf("%d",&num);
		if(num <50){
			printf("number : %d\n",num);
			for(j=0;j<num;j++){
				printf("*");
			}
			printf("\n");
			i++;
		} else{
			continue;
		}
	}while(i<=7);
	return 0;
}