#include <graphics.h>
#include <conio.h>

int main()
{
	//initilizing graphic driver and
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode;

	//calling initgraph
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	outtextxy(20, 20 + 20, "Program to fill color in different areas using putpixel in C graphics");

	//initilizing the type of variables

	int i,j;

	//loop for first area
	for(i=60;i<=120;i++)
	{
		for(j=60;j<=120;j++)
		{
			putpixel(j, i, YELLOW);
		}
	}

	//loop of second area
	for(i=121;i<=180;i++)
	{
		for(j=121;j<=180;j++)
		{
			putpixel(j, i, GREEN);
		}
	}

	//loop of third area
	for(i=181;i<=240;i++)
	{
		for(j=181;j<=240;j++)
		{
			putpixel(j, i, BLUE);
		}
	}

	getch();

	return 0;
}

