#include <graphics.h>
#include <conio.h>


int main()
{
	//initilizing graphic driver and
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode;

	//calling initgraph with parameters
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	outtextxy(10, 10 + 10, "Program to draw polygon of different shapes in C graphics");

	//points of ploygon 1
	int p1[]={520,250,230,470,290,240,520,250};

	//points of ploygon
	int p2[]={120,150,20,200,150,267,450,50,120,150};

	setcolor(YELLOW);
	//drawing polygon 1
	drawpoly(4, p1);

	setcolor(RED);
	//drawing polygon 2
	drawpoly(5, p2);

	getch();

	return 0;
}
