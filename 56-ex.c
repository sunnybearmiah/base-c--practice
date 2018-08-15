#include<stdio.h>
#include<graphics.h>
//MinGW使用了 ege12.8版本
//必须使用 c++ 编译  
//g++ 56-ex.c -o 56-ex -g -Wall -lgraphics4 -lgdi32 -limm32 -lmsimg32 -lole32 -loleaut32 -lwinmm -luuid
int main(){
	int d,m,i;
	float j=1,k=1;
	d = 640;
	m = 480;
	initgraph(d,m);
	setbkcolor(YELLOW);
	for(i=0;i<=25;i++){
		setcolor(8);
		circle(310,250,k);
		k = k+j;
		j = j+0.3;
	}
	getch(); // 等待用户按键，按任意键继续
	closegraph(); // 关闭图形界面
	return 0;
}
