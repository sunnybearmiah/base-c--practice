#include<graphics.h>

int main(){
	initgraph(800,800);
	setbkcolor(GREEN);
	//椭圆心，开始角度，结束角度，横轴半径，竖半径
	//画出的圆弧线
	ellipse(250,250,0,360,100,200);
	getch();
	closegraph();
	return 0;
}