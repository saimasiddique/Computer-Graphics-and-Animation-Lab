
// program for DDA line generation
#include <iostream>
#include <graphics.h>
#include<math.h>
using namespace std;
//Function for finding absolute value
int abs (int n)
{
    return ( (n>0) ? n : ( n * (-1)));
}

//DDA Function for line generation
void DDA(int X0, int Y0, int X1, int Y1)
{
    // calculate dx & dy
    int dx = X1 - X0;
    int dy = Y1 - Y0;

    // calculate steps required for generating pixels
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    // calculate increment in x & y for each steps
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    // Put pixel for each step
    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (round(X),round(Y),RED); // put pixel at (X,Y)
        X += Xinc;		 // increment in x at each step
        Y += Yinc;		 // increment in y at each step
        delay(100);		 // for visualization of line-
        // generation step by step
    }
}

// Driver program
int main()
{
    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");

    int x1,y1,x2,y2;
    cout<<"Enter co-ordinate values: \n";
    cout<<"x1 = ";
    cin>>x1;
    cout<<"y1 = ";
    cin>>y1;
    cout<<"x2 = ";
    cin>>x2;
    cout<<"y2 = ";
    cin>>y2;
    DDA(x1, y1, x2, y2);
    getch();                  //Wait for user operation
    closegraph();             //Close graphics
    return 0;
}
