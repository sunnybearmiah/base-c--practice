#include<stdio.h>

int main(){
	int s;
	char g;
	printf("input your score: ");
	scanf("%d",&s);

	g = (s>=60)?((s>=90)?'A':'B'):'C';
	printf("your grade is: %c",g);
	return 0;
}