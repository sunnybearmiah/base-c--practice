#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void order(char *s){
	int i,j,k;
	for(i=0;i<strlen(s)-1;i++){
		for(j=i+1;j<strlen(s);j++){
			if(s[i]>s[j]){
				k = s[i];
				s[i] = s[j];
				s[j] = k;
			}
		}
	}
}

int main(){
	FILE *fp_1,*fp_2,*fp_3;
	char s1[100],s2[100];
	char *p ;
	void order(char *s);

	if((fp_1 = fopen("a.txt","r")) == NULL){
		printf("error : cannot open the file ");
		exit(0);
	}
	fgets(s1,99,fp_1);
	fclose(fp_1);
	printf("s1: %s\n",s1);

	if((fp_2 = fopen("b.txt","r")) == NULL){
		printf("error : cannot open the file ");
		exit(0);
	}
	fgets(s2,99,fp_2);
	fclose(fp_2);
	printf("s2: %s\n",s2);

	p = (char *)malloc((strlen(s1)+strlen(s2))+1);
	p[0] = '\0';
	strcat(p,s1);
	strcat(p,s2);
	printf("p: %s\n",p);

	order(p);
	printf("p after order : %s\n",p);

	if((fp_3 = fopen("c.txt","w")) == NULL){
		printf("error : cannot open the file ");
		exit(0);
	}

	fputs(p,fp_3);
	fclose(fp_3);
	return 0;
}	
