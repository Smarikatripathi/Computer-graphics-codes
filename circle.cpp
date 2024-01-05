
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void draw_circle(int,int,int);
void symmetry(int,int,int);
int main()
{
	int xc,yc,R;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"(char*)");
	printf("Enter the center of the circle:\n");
	printf("xc=");
	scanf("%d",&xc);
	printf("yc=");
	scanf("%d",&yc);
	printf("Enter the radius of the circle");
	scanf("%d",&R);
	draw_circle(xc,yc,R);
	getch();
	closegraph();
}
