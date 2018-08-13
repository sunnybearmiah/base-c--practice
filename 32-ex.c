#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//从数组中删除指定单个元素
int main(){
	char s[10];
	char s1[20];
	int i,j,k;

	printf("delete characters : ");
	gets(s);
	printf("%s\n",s);

	printf("original characters : ");
	gets(s1);
	printf("%s\n",s1);

	for(i=0;i<strlen(s);i++){
		for(j=0;j<strlen(s1);j++){
			if(s[i] == s1[j]){
				for(k=j;k<strlen(s1);k++){
					if(k==(strlen(s1)-1)){
						s1[k] = '\0'; //字符串以'\0'结尾
					}else{
						s1[k] = s1[k+1];
					}
				} 
				
			}
		}
	}

	printf("result : %s\n",s1);
	return 0;
}