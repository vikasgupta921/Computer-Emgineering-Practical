#include<stdio.h>
//#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
//#include<dos.h>
#include<graphics.h>
using namespace std;
void cirbresen(int x,int y,int r);
void display(int,int,int,int);
int main()
{
 int gd=DETECT,gm,x,y,r;
 initgraph(&gd,&gm,NULL);
 cleardevice();
 cout<<"\n olympic";
 cirbresen(200,200,30);
 cirbresen(268,200,30);
 cirbresen(335,200,30);
 cirbresen(232,230,30);
 cirbresen(302,230,30);

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
	  putpixel(x1+x,y1+y,2);
	  putpixel(x1+x,y-y1,3);
	  putpixel(x-x1,y1+y,4);
	  putpixel(x-x1,y-y1,5);
	  putpixel(x+y1,y+x1,6);
	  putpixel(x+y1,y-x1,7);
	  putpixel(x-y1,y+x1,8);
	  putpixel(x-y1,y-x1,9);
	}
