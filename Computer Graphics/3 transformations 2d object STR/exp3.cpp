#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
  int x1,x2,x3,x4,y1,y2,y3,y4,nx1,ny1,nx2,ny2,ny3,nx3,nx4,ny4,Sx,Sy,ch,t,r;
  int gd=DETECT,gm;
  char a;
  x1=80,x2=100,x3=100,x4=80,y1=80,y2=80,y3=100,y4=100;
 do{
  cout<<"1.Scale\n2.Translation\n3.Rotation\n Enter your choice ";
  cin>>ch;

  
  switch(ch)
 {
  	case 1: cout<<"Enter scaling factor x";
		cin>>Sx;
		cout<<"Enter scaling factor y";
		cin>>Sy;
		nx1=x1*Sx;
		ny1=y1*Sy;
		nx2=x2*Sx;
		ny2=y2*Sy;
		nx3=x3*Sx;
		ny3=y3*Sy;
		nx4=x4*Sx;
		ny4=y4*Sy; 
		initgraph(&gd,&gm,NULL);
		setcolor(1);
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x4,y4);
		line(x4,y4,x1,y1);
		setcolor(WHITE);
		line(nx1,ny1,nx2,ny2);
		line(nx2,ny2,nx3,ny3);
		line(nx3,ny3,nx4,ny4);
		line(nx4,ny4,nx1,ny1);
		break;
			
	case 2:cout<<"Enter translation factor x";
		cin>>Sx;
		cout<<"Enter translation factor y";
		cin>>Sy;
		nx1=x1+Sx;
		ny1=y1+Sy;
		nx2=x2+Sx;
		ny2=y2+Sy;
		nx3=x3+Sx;
		ny3=y3+Sy;
		nx4=x4+Sx;
		ny4=y4+Sy; 
		initgraph(&gd,&gm,NULL);
		setcolor(1);
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x4,y4);
		line(x4,y4,x1,y1);
		setcolor(WHITE);
		line(nx1,ny1,nx2,ny2);
		line(nx2,ny2,nx3,ny3);
		line(nx3,ny3,nx4,ny4);
		line(nx4,ny4,nx1,ny1);
		break;

	case 3: cout<<"Enter angle of rotation ";
		cin>>r;
		t=3.14*r/180;
		nx1=abs(x1*cos(t)-y1*sin(t));
		ny1=abs(x1*sin(t)+y1*cos(t));
		nx2=abs(x2*cos(t)-y2*sin(t));
		ny2=abs(x2*sin(t)+y2*cos(t));
		nx3=abs(x3*cos(t)-y3*sin(t));
		ny3=abs(x3*sin(t)+y3*cos(t));
		nx4=abs(x4*cos(t)-y4*sin(t));
		ny4=abs(x4*sin(t)+y4*cos(t));
		initgraph(&gd,&gm,NULL);
		setcolor(1);
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x4,y4);
		line(x4,y4,x1,y1);
		setcolor(WHITE);
		line(nx1,ny1,nx2,ny2);
		line(nx2,ny2,nx3,ny3);
		line(nx3,ny3,nx4,ny4);
		line(nx4,ny4,nx1,ny1);
		break;
} cout<<"Do you want to continue ";
  cin>>a;
}while(a!='n');
getch();
closegraph();

return 0;
}
/*root1@root1-HP-Pro-3090-MT:~$ ./a.out
1.Scale
2.Translation
3.Rotation
 Enter your choice 1
Enter scaling factor x2
Enter scaling factor y3
root1@root1-HP-Pro-3090-MT:~$ ./a.out
1.Scale
2.Translation
3.Rotation
 Enter your choice 2
Enter translation factor x4
Enter translation factor y2
root1@root1-HP-Pro-3090-MT:~$ ./a.out
1.Scale
2.Translation
3.Rotation
 Enter your choice 3
Enter angle of rotation 300

*/

