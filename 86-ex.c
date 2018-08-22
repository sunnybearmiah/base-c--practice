#include<stdio.h>
#include<string.h>
#include<malloc.h>

char * concat(char *p,char *q){
	char *s;
	//(strlen(p)+strlen(q))*sizeof(char)+1
	s = (char *)malloc((strlen(p)+strlen(q))+1);
	s[0] = '\0';//必须初始化
	strcat(s,p);//p[0]取代s最后的空字符'\0'
	strcat(s,q);
	return s;
}

int main(){
	char s1[20],s2[20];
	char *s;
	char * concat(char *p,char *q);

	printf("input s1 string : ");
	gets(s1);
	printf("input s2 string : ");
	gets(s2);

	s = concat(s1,s2);
	printf("string after concat is :");
	puts(s);
	return 0;
}