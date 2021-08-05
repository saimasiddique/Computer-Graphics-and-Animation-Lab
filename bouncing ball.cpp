#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{

    int gd = DETECT, gm;
    int i, x, y, flag=0;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    /* get mid positions in x and y-axis */
    x = getmaxx()/2;
    y = 30;


    while (!kbhit())
    {
        if(y >= getmaxy()-30 || y <= 30)
            flag = !flag;
        /* draws the gray board */
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        circle(x, y, 30);
        floodfill(x, y, YELLOW);

        /* delay for 30 milli seconds */
        delay(30);

        /* clears screen */
        cleardevice();
        if(flag)
        {
            y = y + 5;
        }
        else
        {
            y = y - 5;
        }
    }

    getch();
    closegraph();
    return 0;
}
