#include<stdio.h>
#include<stdlib.h>
//结构体定义变量
//1. struct man person
//2. struct man *person
//3. struct man person[3]

struct man{
	char name[20];
	int age;
};

int main(){
	struct man person[3] = {"amanda",18,"bobo",20,"cindy",19};

	printf("%c\n",person[0].name[2]); //a
	struct man *p,*q;
	int i,m=0;
	p = person;

	for(i=0;i<3;i++){
		if(m<p->age){
			m = p->age;
			q = p;
		}
		p++;
	}

	printf("%s %d\n",q->name,q->age);
	return 0;
}