#include<stdio.h>
#include<ctype.h>

int main(){
	char c;
	printf("iuput the 1st character : ");
	scanf("%c",&c); //自动带上换行符
	getchar(); 
	c = tolower(c);
	switch(c){
		case 'm' :
			printf("Monday\n");
			break;
		case 'w' :
			printf("Wedesday\n");
			break;
		case 'f' :
			printf("Friday\n");
			break;
		case 't' :
			printf("input the 2nd character : ");
			scanf("%c",&c);
			c = tolower(c);
			if(c == 'u'){
				printf("Tuesday\n");
				break;
			}
			if(c == 'h'){
				printf("Thursday\n");
				break;
			}
		case 's' :
			printf("input the 2nd character : ");
			scanf("%c",&c);
			c = tolower(c);
			if(c == 'a'){
				printf("Saturday\n");
				break;
			}
			if(c == 'u'){
				printf("sunday\n");
				break;
			}
		default : 
			printf("not a week day");
			break;
	}
	return 0;
}