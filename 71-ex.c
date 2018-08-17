#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char name[50];
	char sex[10];
	int age;
}Stu;

void input(Stu *stu);
void output(Stu *stu);

void input(Stu *stu){
	int i;
	for(i=0;i<5;i++){
		scanf("%s %s %d",stu[i].name,stu[i].sex,&stu[i].age);
	}
}

void output(Stu *stu){
	int i;
	for(i=0;i<5;i++){
		printf("%s %s %d\n",stu[i].name,stu[i].sex,stu[i].age);
	}
}

int main(){
	Stu stu[5];
	printf("input 5 student's info : \n ");
	printf("name\tsex\tage\n");
	input(stu);

	printf("\n");
	printf("output 5 student's info : \n ");
	printf("name\tsex\tage\n");
	output(stu);

	system("pause");  //请按任意键继续. . .
	return 0;
}
