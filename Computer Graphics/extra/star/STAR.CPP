//#include<stdio.h>
//#include<conio.h>
#include<iostream>
using namespace std;
//#include<stdlib.h>
#include<math.h>
//#include<dos.h>
#include<graphics.h>
void cirbresen(int x,int y,int r);
void dda(int x1,int y1,int x2,int y2);
void display(int,int,int,int);

int main()
{
 int gd=DETECT,gm,x,y,r;
 initgraph(&gd,&gm,NULL);
 cleardevice();
 cout<<"\n STAR";
/* dda(150,110,210,210);
 dda(150,110,96,213);
 dda(96,213,210,210);
 dda(95,150,210,150);
 dda(95,150,160,250);
 dda(210,150,160,250);
 cirbresen(155,180,20);
 cirbresen(154,182,10);*/
 cirbresen(173,190,20);
 dda(100,150,250,150);
 dda(100,150,175,280);
 dda(250,150,175,280);
 dda(100,230,250,230);
 dda(175,100,100,230);
 dda(175,100,250,230);
delay(5000);
return 0;
  getch();
 closegraph();
 }
 void cirbresen(int x,int y,int r)
 {
   float s;
   int x1,y1;
   x1=0,y1=r;
   s=3-(2*r);
   while(x1<=y1)
   {
	if(s<=0)
	 s+=4*x1+6;
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
	  putpixel(x1+x,y1+y,9);
	  putpixel(x1+x,y-y1,8);
	  putpixel(x-x1,y1+y,7);
	  putpixel(x-x1,y-y1,6);
	  putpixel(x+y1,y+x1,5);
	  putpixel(x+y1,y-x1,4);
	  putpixel(x-y1,y+x1,3);
	  putpixel(x-y1,y-x1,2);
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
   putpixel(x,y,5);
   for(i=1;i<=steps;i++)
   {
	x=x+xinc;
	y=y+yinc;
	x1=x+0.5;
	y1=y+0.5;
	putpixel(x1,y1,5);
   }
  }

