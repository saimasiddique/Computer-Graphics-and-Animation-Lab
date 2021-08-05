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

    int i,x,y,j;


// man
    for(j=1; j<600; j=j+5)
    {
        line(0,400,800,400);
        circle(30+j,280,20); //head
        line(30+j,300,30+j,350); //body
        line(30+j,330,70+j,330); //hand
        line(30+j,335,70+j,339); //hand
        if(j%2==0)
        {
            line(30+j,350,25+j,400); //left leg
            line(30+j,350,10+j,400); // right
        }
        else
        {
            line(30+j,350,35+j,400); //transition
            delay(20);
        }
////umbrela
        line(70+j,190,70+j,350);
        pieslice(70+j,200,0,180,100);
// rain
        for(i=0; i<300; i++)
        {
            x= rand()%800+1;
            y= rand()%800+1;
            outtextxy(x,y,"/");
        }
        delay(170);
        cleardevice();
    }
    getch();
    closegraph();
}
