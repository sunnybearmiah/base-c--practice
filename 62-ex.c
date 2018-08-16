#include<graphics.h>

int main(){
	initgraph(800,800);
	setbkcolor(GREEN);
	for(int i=10;i<500;i=i+20){
		for(int j=20;j<600;j=j+10){
			putpixel(i,j,1);
		}
	}
	getch();
	closegraph();
	return 0;
}