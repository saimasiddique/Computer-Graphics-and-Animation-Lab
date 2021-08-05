#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	outtextxy(177,180,"Loading, Please Wait...");

	for(int i=190;i<600;i++)
	{
		delay(30);
		line(i,210,i,230);
	}

	closegraph();
	_getch();

	return 0;
}
