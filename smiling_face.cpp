#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
   int gd = DETECT, gm, area, temp1, temp2, left = 25, top = 75;
   void *p;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   setcolor(YELLOW);
   circle(50, 100, 25);
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(50, 100, YELLOW);

   setcolor(BLACK);//outline of smile and eye
   setfillstyle(SOLID_FILL, BLACK);//eyeball
   fillellipse(44, 85, 2, 6);
   fillellipse(56, 85, 2, 6);

   ellipse(50, 100, 205, 335, 20, 9);
   ellipse(50, 100, 205, 335, 20, 10);
   ellipse(50, 100, 205, 335, 20, 11);

   area = imagesize(left, top, left + 50, top + 50);
   p = malloc(area);

   setcolor(WHITE);
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
   outtextxy(155, 451, "Smiling Face Animation");

   setcolor(BLUE);
   rectangle(0, 0, 639, 449);

   while(!kbhit())
   {
      temp1 = 1 + rand()%588+1;
      temp2 = 1 + rand()%380+1;

      getimage(left, top, left + 50, top + 50, p);
      putimage(left, top, p, XOR_PUT);
      putimage(temp1 , temp2, p, XOR_PUT);
      delay(1000);
      left = temp1;
      top = temp2;
   }

   getch();
   closegraph();
   return 0;
}
