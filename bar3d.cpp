// C Implementation for bar3d() function
#include <graphics.h>

// driver code
int main()
{
	// gm is Graphics mode which is
	// a computer display mode that
	// generates image using pixels.
	// DETECT is a macro defined in
	// "graphics.h" header file
	int gd = DETECT, gm;

	// initgraph initializes the
	// graphics system by loading a
	// graphics driver from disk
	initgraph(&gd, &gm, "");

	// location of sides
	int left, top, right, bottom;

	// depth of the bar
	int depth;

	// top flag denotes top line.
	int topflag;
   settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(375,200,"3D BAR GRAPH");
	// left, top, right, bottom,
	// depth, topflag location's
	setfillstyle(1, YELLOW);

	bar3d(left = 150, top = 250,
	right = 190, bottom = 350,
	depth = 20, topflag = 1);

	bar3d(left = 220, top = 150,
	right = 260, bottom = 350,
	depth = 20, topflag = 2);

	bar3d(left = 290, top = 200,
	right = 330, bottom = 350,
	depth = 20, topflag = 1);

     setcolor(WHITE);
	// y axis line
	line(100, 50, 100, 350);

	// x axis line
	line(100, 350, 400, 350);
	outtextxy(65,60,"Y");
    outtextxy(390,370,"X");

	getch();

	// closegraph function closes the
	// graphics mode and deallocates
	// all memory allocated by
	// graphics system .
	closegraph();

	return 0;
}

