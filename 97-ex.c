#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp = NULL;
	char filename[50];
	char ch;

	printf("filename : ");
	gets(filename);
	//fopen 打开或者新建
	if((fp=fopen(filename,"w"))==NULL){
		printf("error: cannot open the file \n");
		exit(0);
	}

	printf("input characters : \n");
	//getchar(); 逐个字符读取

	while((ch=getchar())!='#'){
		fputc(ch,fp);
	}

	fclose(fp);
	return 0;
}