#include<graphics.h>
#include<stdio.h>

int main(void)
{
	int gdriver = DETECT,gmode;

	int x1=100,y1=100,x2=200,y2=200;

	initgraph(&gdriver,&gmode, "NULL");

	line(100,100,200,200);
	closegraph();
}