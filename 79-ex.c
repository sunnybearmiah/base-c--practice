#include<stdio.h>
#include<string.h>

void swap(char *p,char *q){
	char temp[20];
	strcpy(temp,p);
	strcpy(p,q);
	strcpy(q,temp);
}

int main(){
	char s1[20];
	char s2[20];
	int n;
	void swap(char *p,char *q);

	printf("input s1 strings : \n");
	gets(s1);
	printf("input s2 strings : \n");
	gets(s2);

	n = strcmp(s1,s2);
	//从大到小
	if(n<0){
		swap(s1,s2);
	}

	printf("ordered list : %s %s",s1,s2);
	return 0;
}