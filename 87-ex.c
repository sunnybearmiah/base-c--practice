#include<stdio.h>

struct student{
	int age;
	char sex;
};

void f(struct student b){
	b.age = 12;
	b.sex = 'm';
}

void f1(struct student *p){
	p->age = 12;
	p->sex = 'm';
}

int main(){
	void f(struct student b);
	void f1(struct student *b);
	struct student a,*p;
	a.age = 23;
	a.sex = 'f';

	f(a); //只传值，不改变
	printf("a.age : %d   a.sex : %c\n",a.age,a.sex);

	p = &a;
	printf("(*p).age : %d   (*p).sex : %c\n",(*p).age,(*p).sex);
	
	f1(p); //传地址，改变
	printf("p->age : %d   p->sex : %c\n",p->age,p->sex);
	printf("a.age : %d   a.sex : %c\n",a.age,a.sex);

	return 0;
}