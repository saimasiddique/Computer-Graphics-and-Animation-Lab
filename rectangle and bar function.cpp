#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>

int main() {
	//initilizing graphic driver and
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode;

	//calling initgraph function with
	//certain parameters
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	outtextxy(10, 10 + 10, "Program to draw rectangle and bar in C graphics");

	//calling rectangle function with certain parameters
	rectangle(50, 100, 100, 50);

	// calling bar function
	bar(200, 50, 150, 100);

	getch();
}
