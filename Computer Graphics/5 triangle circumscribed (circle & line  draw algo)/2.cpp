#include<iostream>
#include<graphics.h>
#include<stdlib.h>
using namespace std;
int xmax,ymax,xmid,ymid;
class pt
{
protected: int xco,yco,color;
    public:
    pt()
    {
        xco=0;yco=0;color=15;
    }
    void setco(int x,int y)
    {  
        xco=x;
        yco=y;
    }  
    void setcolor(int c)  
    {  
        color=c;
    }  
    void draw()
    {    putpixel(xco,yco,color);

    }
};
class dline: public pt   //derived class
{
    private: int x2,y2;
  
    public:
    dline():pt()
    {
        x2=0,y2=0;
    }  
   



 void setline(int x, int y, int xx, int yy)
    {
        pt::setco(x,y);
        x2=xx;
        y2=yy;
    }
void drawl(int color)
{
	float x,y,dx,dy,length;
	int i;
	pt::setcolor(color);
	dx=abs(x2-xco);
	dy=abs(y2-yco);
	if(dx >= dy)
	{
		length=dx;
	}
	else
	{
		length=dy;
	}
	dx=(x2-xco)/length;
	dy=(y2-yco)/length;
	x=xco+0.5;
	y=yco+0.5;
	i=1;
	while(i<=length)
	{
		pt::setco(x,y);
		pt::draw();
		x=x+dx;
		y=y+dy;
		i=i+1;
	}
	pt::setco(x,y);
	pt::draw();
}
};



void drawFig(int ax,int ay,int bx,int by,int cx,int cy,int dx,int dy,int n)
{
	int m1x,m1y,m2x,m2y,m3x,m3y,m4x,m4y;
	dline l1;
	l1.setline(ax+xmid,ymid-ay,bx+xmid,ymid-by);
	l1.drawl(15);
	l1.setline(bx+xmid,ymid-by,cx+xmid,ymid-cy);
	l1.drawl(15);
	l1.setline(cx+xmid,ymid-cy,dx+xmid,ymid-dy);
	l1.drawl(15);
	l1.setline(dx+xmid,ymid-dy,ax+xmid,ymid-ay);
	l1.drawl(15);
//midpoints calculations
	m1x=(ax+bx)/2;
	m1y=(ay+by)/2;
	m2x=(bx+cx)/2;
	m2y=(by+cy)/2;
	m3x=(cx+dx)/2;
	m3y=(cy+dy)/2;
	m4x=(dx+ax)/2;
	m4y=(dy+ay)/2;
n--;
if(n!=0)
{
	drawFig(m1x,m1y,m2x,m2y,m3x,m3y,m4x,m4y,n);
}
}
int main()
{
	int gd,gm;
	int x1,x2,y1,y2;
	pt p1;
	p1.setco(100,100);
	p1.setcolor(14);
	dline l;
	cout<<"\n Enter 2 endpoints of line:";
	cout<<"\nEnter the value of Left Bottom x1:"; cin>>x1;
	cout<<"\nEnter the value of Left Bottom y1:"; cin>>y1;
	cout<<"\nEnter the value of Right Top x2:"; cin>>x2;
	cout<<"\nEnter the value of Right Top y2:"; cin>>y2;

	initgraph(&gd,&gm,NULL);
	xmax=getmaxx();
	ymax=getmaxy();
	xmid=xmax/2;
	ymid=ymax/2;

	line(xmid,0,xmid,ymax);
	line(0,ymid,xmax,ymid);
	drawFig(x1,y1,x1,y2,x2,y2,x2,y1,3);
	getch();
	closegraph();
	return 0;
}

/* OUTPUT

root1@root1-HP-Pro-3090-MT:~$ g++ 2.cpp -lgraph
root1@root1-HP-Pro-3090-MT:~$ ./a.out

 Enter 2 endpoints of line:
Enter the value of Left Bottom x1:20

Enter the value of Left Bottom y1:10

Enter the value of Right Top x2:90

Enter the value of Right Top y2:75

*/
