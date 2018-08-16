#include<graphics.h>

int main(){
	initgraph(800,800);
	setbkcolor(WHITE);
	rectangle(100,100,600,700);
	//椭圆心，横竖半径
	fillellipse(350,400,250,300);
	getch();
	closegraph();
	return 0;
}