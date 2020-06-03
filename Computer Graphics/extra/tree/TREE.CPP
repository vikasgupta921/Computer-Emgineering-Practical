//#include<iostream.h>
//#include<conio.h>
//#include<stdlib.h>
#include<math.h>
//#include<dos.h>
#include<graphics.h>
void circbresen(int x,int y,int r);
void display(int x1,int y1,int x,int y);
void dda(int x1,int y1,int x2,int y2);
int main()
{
	int gd=DETECT,gm,x,y,r;
	int x1,y1,x2,y2;

	initgraph(&gd,&gm,NULL);
	cleardevice();
	dda(300,100,330,150);
	dda(300,100,270,150);
	dda(270,150,290,150);
	dda(310,150,330,150);
	dda(290,150,260,200);
	dda(310,150,340,200);
	dda(260,200,280,200);
	dda(320,200,340,200);
	dda(280,200,250,250);
	dda(320,200,350,250);
	dda(250,250,290,250);
	dda(310,250,350,250);
	dda(290,250,290,350);
	dda(310,250,310,350);
	dda(290,350,310,350);

		 getch();
	closegraph();
}
void circbresen(int x,int y,int r)
{
	float s;
	int x1,y1;

	x1=0;
	y1=r;
	s=3-(2*r);

	while(x1<=y1)
	{
		if(s<=0)
			s+=(4*x1)+6;
		else
		{
			s+=4*(x1-y1)+10;
			y1--;
		}
		x1++;
		display(x1,y1,x,y);
	}
}
void display(int x1,int y1,int x,int y)
{
	putpixel(x1+x,y1+y,WHITE);
	putpixel(x1+x,y-y1,WHITE);
	putpixel(x-x1,y1+y,WHITE);
	putpixel(x-x1,y-y1,WHITE);
	putpixel(x+y1,y+x1,WHITE);
	putpixel(x+y1,y-x1,WHITE);
	putpixel(x-y1,y+x1,WHITE);
	putpixel(x-y1,y-x1,WHITE);
}
void dda(int x1,int y1,int x2,int y2)
{
	int i,dx,dy,steps;
	float x,y;
	float xinc,yinc;

	dx=x2-x1;
	dy=y2-y1;

	if(abs(dx)>=abs(dy))
		steps=dx;
	else
		steps=dy;

	xinc=(float)dx/steps;
	yinc=(float)dy/steps;

	x=x1;
	y=y1;

	putpixel(x,y,WHITE);

	for(i=1;i<steps;i++)
	{
		x=x+xinc;
		y=y+yinc;
		x1=x+0.5;
		y1=y+0.5;

		putpixel(x1,y1,WHITE);
	}
}
