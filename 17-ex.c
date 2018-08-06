#include<stdio.h>

int main(){
	char c;
	int m=0,n=0,x=0,y=0;
	printf("input a string , use ENTER key as then end : ");
	while((c = getchar()) != '\n'){
		//英文字母
		if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			m++;
		//空格
		} else if(c==' '){
			n++;
		//数字
		} else if(c>='0' && c<='9'){
			x++;
		//其他字符
		} else{
			y++;
		}
	}
	printf("count letters : %d\n",m);
	printf("count space : %d\n",n);
	printf("count numbers : %d\n",x);
	printf("count ohters : %d\n",y);
	printf("");
	return 0;
}