#include<stdio.h>
#include<string.h>
//反转
void reverse(char *p){
	int len = 0;
	int i;
	char c;
	len = strlen(p);
	for(i=0;i<(len/2);i++){
		c = *(p+i);
		*(p+i) = *(p+len-1-i);
		*(p+len-1-i) = c;
	}
}

int main(){
	char s[] = "www.baidu.com";
	printf("before reverse : %s\n",s);

	reverse(s);
	printf("after reverse : %s\n",s);
	return 0;
}

