#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
void drawCircle(int x, int y, int xc, int yc);
int main()
{
	int gd = DETECT, gm;
	int r, xc, yc, d, x, y;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	cout<<"Enter the center co-ordinates\n";
	cin>>xc>>yc;
	cout<<"Enter the radius of circle\n";
	cin>>r;
	d = 1 - r;
	x = 0;
	y = r;
	while(x < y)
	{
		drawCircle(x,y,xc,yc);
		//++x;
		if(d < 0)
		{
			d = d + (2*x) + 3;
			x++;
		}
		else
		{
			//--y;
			//d = d + (2*x) + 1 - (2*y);
			d +=(x-y)*2 +5;
			x++;
			y--;
		}
	}

	getch();
	closegraph();
}

void drawCircle(int x, int y, int xc, int yc)
{

    //setfillstyle(HATCH_FILL,RED);
	putpixel(x+xc,y+yc,RED);
	putpixel(-x+xc,y+yc,RED);
	putpixel(x+xc, -y+yc,RED);
	putpixel(-x+xc, -y+yc, RED);
	putpixel(y+xc, x+yc, RED);
	putpixel(y+xc, -x+yc, RED);
	putpixel(-y+xc, x+yc, RED);
	putpixel(-y+xc, -x+yc, RED);

    //floodfill(xc, yc, RED);

}
