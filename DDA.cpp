#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
int main()
{
	float x,y,x1,x2,y1,y2,dx,dy,step;
		/*The two int variables gd, gm are graphic driver and graphic mode respectively. The gm handles value that tells us which resolution and monitor we are using.
	 The gd specifies the graphic driver to be used. In our program we have gd=DETECT means we have passed the highest possible value available for the
	  detected driver.*/
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	printf("enter the value of x1 and y1:");
	scanf("%f%f",&x1,&y1);
	printf("enter the value of x2 and y2:");
	scanf("%f%f",&x2,&y2);
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy)
	step=dx;
	else
	step=dy;
	dx=dx/step;
	dy=dy/step;
	x=x1;
	y=y1;
	i=1;
	while(i<=step)
	{
		putpixel(x,y,WHITE);  //putpixel() function which plots a pixel at location (x, y) of specified color.
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(100);
		}
		closegraph();
}

