#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	setcolor(7);
	printf("MY SWEET HOME");
	rectangle(60,80,150,200);
	rectangle(95,140,120,200);
	line(60,80,100,15);
	line(100,15,150,80);
	circle(100,60,10);
	getch();
}
