#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	FILE *fp = NULL;
	char s[100];

	if((fp = fopen("98-test","w"))==NULL){
		printf("error : cannot oprn the file .");
		exit(0);
	}

	printf("input characters : \n");
	gets(s);

	int len = strlen(s);
	for(int i=0;i<len;i++){
		s[i] = toupper(s[i]);
	}

	fputs(s,fp);
	fclose(fp);
	return 0;
}