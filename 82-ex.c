#include<stdio.h>
#include<stdlib.h>

int main(){
	char s[20];
	int i=0,n=0;

	printf("input a octal number : ");
	gets(s);

	puts(s);

	while(s[i] != '\0'){
		printf("%d %d\n",i,(int)s[i]);//强制转换获取的是ascii值
		n = n*8 + s[i] - '0';//把字符串转化为整数，ascii计算
		i++;
	}
	printf("octal %s to decimal : %d\n",s,n);
	return 0;
}
