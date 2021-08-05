#include <iostream>
#include <graphics.h>

  using namespace std;
  //Midpoint line drawing
  void line1(int x1,int y1,int x2,int y2){

      int x,y,d0,d1,d2,a,b;
      y=y1;
      a=y1-y2;          //Algorithm of a in straight line equation
      b=x2-x1;          //Algorithm of b in straight line equation
      d0=2*a+b;         //Incremental initial value
      d1=2*a;           //Increment when> = 0
      d2=2*(a+b);       //Increment when <0
      for(x=x1;x<=x2;x++){
             putpixel(x,y,GREEN);   //Brighten
         if(d0<0){
             y++;
             d0+=d2;
         }else{

         d0+=d1;
         }

      }
 }
 //Bresenham line drawing algorithm
 void line2(int x1,int y1,int x2,int y2){

    int x,y,dx,dy,d;
    y=y1;
    dx=x2-x1;
    dy=y2-y1;
    d=2*dy-dx;        //Initial value of increment d
    for(x=x1;x<=x2;x++){
     putpixel(x,y,GREEN);   //Brighten
     if(d<0){
         d+=2*dy;
     }else{
       y++;
       d+=2*dy-2*dx;
     }



    }

 }
 int main()
 {
     int gd = DETECT, gm;
     initgraph(&gd, &gm, "C:\\TC\\BGI");
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


     line1(x1,y1,x2,y2);   //Line drawing
     getch();                  //Wait for user operation
     closegraph();             //Close graphics
     return 0;
 }
