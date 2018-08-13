#include<stdio.h>

int main(){
	int num;
	int i,count=5;
	int arr[5];
	//float a1,a2,a3,a4,a5;
	printf("input a number less then 100000 : ");
	scanf("%d",&num);

	arr[0] = num/10000;
	arr[1] = num/1000%10;
	arr[2] = num/100%10;
	arr[3] = num/10%10;
	arr[4] = num%10;

	for(i=0;i<5;i++){
		if(arr[i]==0){
			count--;
		}else{
			break;
		}
	}
	printf("total digits : %d\n",count);

	printf("reverse order : ");
	for(i=0;i<count;i++){
		printf("%d",arr[4-i]);
	}
	return 0;
}