#include<stdio.h>

struct pro{
	float con;
	char *p;
};

int main(){
	struct pro program;
	char s[] = "beautiful world!";

	program.con = 1.23;
	program.p = s;

	printf("%f \n %s\n",program.con,program.p);
	return 0;
}