#include<stdio.h>
#include<graphics.h>

int main(){
	int i;
	initgraph(1000,1000);
	setbkcolor(WHITE);
	setcolor(1);
	//矩形
	rectangle(200,100,600,600);
	//竖线
	for(i=0;i<=7;i++){
		line(200+50*i,100,200+50*i,300);
		line(200+50*i,400,200+50*i,600);
	}
	//横线
	for(i=0;i<=4;i++){
		line(200,100+50*i,600,100+50*i);
		line(200,600-50*i,600,600-50*i);
	}

	setfont(30,10,"宋体");
	outtextrect(230,335,330,415,"楚\t河");
	outtextrect(470,335,530,415,"汉\t界");

	

	getch();
	closegraph();
	return 0;
}