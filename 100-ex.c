#include<stdio.h>
#include<stdlib.h>

struct student{
	int id;
	int java;
	int math;
	int finance;
	float avarge;
	char name[20];
};

int main(){
	struct student stu[5];
	FILE *fp = NULL;
	int i;
	float ava;

	printf("输入5个学生的信息：\n学号，姓名，Java成绩，数学成绩，金融学成绩 \n");
	for(i=0;i<5;i++){
		scanf("%d,%s,%d,%d,%d",&stu[i].id,stu[i].name,&stu[i].java,&stu[i].math,&stu[i].finance);
		ava = (float)(stu[i].java+stu[i].math+stu[i].finance)/3;
		stu[i].avarge = ava;
	}

	if((fp=fopen("100-ex.txt","w"))==NULL){
		printf("error : cannot open the file.");
		exit(0);
	}

	for(i=0;i<5;i++){
		//fputs(stu[i],fp);
		fprintf(fp,"%d %s %3d %3d %3d %3d\n",stu[i].id,stu[i].name,stu[i].java,stu[i].math,stu[i].finance,stu[i].avarge);
	}
	fclose(fp);
	return 0;
}