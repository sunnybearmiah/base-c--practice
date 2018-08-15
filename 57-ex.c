#include<stdio.h>
#include<graphics.h>

int main(){
	int i;
	float x1,x2,y1,y2;

	initgraph(640,800);
	setbkcolor(GREEN);
	x1 = 263;
	x2 = 275;
	y1 = 263;
	y2 = 275;

	for(i=0;i<=18;i++){
		setcolor(5);
		line(x1,y1,x2,y2);
		x1 = x1-5;
		y1 = y1-5;
		x2 = x2+5;
		y2 = y2+5;
	}
	getch();
	closegraph();
	return 0;
}