#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int x,y,x1,y1,x2,y2,p,dx,dy;
	/*The two int variables gd, gm are graphic driver and graphic mode respectively. The gm handles value that tells us which resolution and monitor we are using.
	 The gd specifies the graphic driver to be used. In our program we have gd=DETECT means we have passed the highest possible value available for the
	  detected driver.*/
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"(char*)");
	printf("\n Enter the x-coordinate of the first point:");
	scanf("%d",&x1);
	printf("\n Enter the Y-coordinate of the first point:");
	scanf("%d",&y1);
	printf("\n Enter the x-coordinate of the second point:");
	scanf("%d",&x2);
	printf("\n Enter the Y-coordinate of the second point:");
	scanf("%d",&y2);
	x=x1;
	y=y1;
	dx=x2-x1;
	dy=y2-y1;
	putpixel(x,y,14); //putpixel() function which plots a pixel at location (x, y) of specified color.
	p=(2*dy-dx);
	while(x<=x2);
	{
		if(p<0)
		{
			x=x+1;
			p=p+2*dy;
		}
		else
		{
			x=x+1;
			y=y+1;
			p=p+(2*dy)-(2*dx);
		}
		putpixel(x,y,15);
	}
	getch();
	closegraph();
	}
