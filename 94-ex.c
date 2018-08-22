#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void cai(){
	int n,m;
	char select;
	int count = 1;

	srand(time(NULL));
	m = rand()%100+1;

	printf("请输入你猜的值：");
	while(1){
		scanf("%d",&n);
		if(n==m){
			printf("猜对了，用了%d次\n",count);
			if(count == 1){
				printf("你是神级人物");
				getchar();
				printf("大神，还玩不？ Y / N\n");
				scanf("%c",&select);
				if(select =='Y' || select == 'y'){
					cai();
				}else{
					printf("谢谢，再见！");
				}
			}else if(count <=5){
				printf("你是王者级人物");
				getchar();
				printf("王者，还玩不？ Y / N\n");
				scanf("%c",&select);
				if(select =='Y' || select == 'y'){
					cai();
				}else{
					printf("谢谢，再见！");
				}
			}else if(count <=10){
				printf("你是大师级人物");
				getchar();
				printf("大师，还玩不？ Y / N\n");
				scanf("%c",&select);
				if(select =='Y' || select == 'y'){
					cai();
				}else{
					printf("谢谢，再见！");
				}
			}else if(count<=15){
				printf("你是菜鸟级人物");
				getchar();
				printf("菜鸟，还玩不？ Y / N\n");
				scanf("%c",&select);
				if(select =='Y' || select == 'y'){
					cai();
				}else{
					printf("谢谢，再见！");
				}
			}else{
				printf("你太蠢了，猜不出来");
				getchar();
				printf("还玩不？ Y / N\n");
				scanf("%c",&select);
				if(select =='Y' || select == 'y'){
					cai();
				}else{
					printf("谢谢，再见！");
				}
			}
			break;
		}else{
			if(n<m){
				printf("你猜小了。\n");
			}else{
				printf("你猜大了。\n");
			}
			count++;
		}
	}
}

int main(){
	void cai();
	cai();
	return 0;
}
