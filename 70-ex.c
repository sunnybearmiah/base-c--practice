#include<stdio.h>

int get_len(char *p){
	int len=0;
	while(*(p) != '\0'){
		len ++;
		p++;
	}
	return len;
}

int main(){
	char s[100];
	int i;
	int get_len(char *p);

	printf("input a string : ");
	gets(s);

	i = get_len(s);
	printf("length of string : %d",i);
	return 0;
}