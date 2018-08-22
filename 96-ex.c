#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char s1[20],s2[10];
	int s1_len,s2_len;
	int i,j,k,count=0;

	printf("input the origin string s1 : ");
	gets(s1);
	printf("input the sub string s2 : ");
	gets(s2);

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	for(i=0;i<s1_len;i++){
		for(j=0;j<s2_len;j++){
			if(s1[i] == s2[j]){
				for(k=1;k<s2_len-j;k++){
					if(s1[i+k] != s2[j+k]){
						break;
					}
				}
				count++;
			}
		}
		i = i+s2_len;
	}
	printf("子串%s在字符串%s中出现了%d次",s2,s1,count);
	return 0;
}
