// C program to create a smiley face
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

    settextstyle(9,HORIZ_DIR,1);
    outtextxy(50, 200, "Program to create smiley face using graphics.h");
    // Set color of smiley to yellow
    setcolor(YELLOW);

    // creating circle and fill it with
    // yellow color using floodfill.
    circle(300, 100, 50);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 100, YELLOW);

    // Set color of background to black
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);

    // Use fill ellipse for creating eyes
    fillellipse(310, 85, 2, 6);
    fillellipse(290, 85, 2, 6);

    // Use ellipse for creating mouth
    ellipse(300, 100, 205, 335, 20, 9);
    ellipse(300, 100, 205, 335, 20, 10);
    ellipse(300, 100, 205, 335, 20, 11);

    getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system
    closegraph();

    return 0;
}
