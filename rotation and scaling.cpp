#include<stdio.h>
#include<math.h>
#include<graphics.h>
using namespace std;
pair<double, double> rotation_in_clockwise(double x1, double y1, double theta)
{
    double temp=x1;
    x1=x1*cos(theta)+y1*sin(theta);
    y1=y1*cos(theta)-temp*sin(theta);

    return {x1,y1};
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    double x1=1,y1=1,y2=4,x2=3,x3=5,y3=7,x4=10,y4=3;
    double pivot_x=3, pivot_y=4;
    int mdx=getmaxx()/2;
    int mdy=getmaxy()/2;
    int factor_for_display=10;
    mdx-=250;
    line(mdx+x1*factor_for_display,mdy-y1*factor_for_display,mdx+x2*factor_for_display,mdy-y2*factor_for_display);
    line(mdx+x2*factor_for_display,mdy-y2*factor_for_display,mdx+x3*factor_for_display,mdy-y3*factor_for_display);
    line(mdx+x3*factor_for_display,mdy-y3*factor_for_display,mdx+x4*factor_for_display,mdy-y4*factor_for_display);
    line(mdx+x1*factor_for_display,mdy-y1*factor_for_display,mdx+x4*factor_for_display,mdy-y4*factor_for_display);

    int textx=x1,texty=y1+80;

    outtextxy(textx,texty,"Original Shape:");
    //for clockwise rotation
    double theta=30;
    pair<double,double> pr=rotation_in_clockwise(x1-pivot_x,y1-pivot_y,theta);
    x1=pr.first+pivot_x;
    y1=pr.second+pivot_y;

    pr=rotation_in_clockwise(x2-pivot_x,y2-pivot_y,theta);
    x2=pr.first+pivot_x;
    y2=pr.second+pivot_y;

    pr=rotation_in_clockwise(x3-pivot_x,y3-pivot_y,theta);
    x3=pr.first+pivot_x;
    y3=pr.second+pivot_y;

    pr=rotation_in_clockwise(x4-pivot_x,y4-pivot_y,theta);
    x4=pr.first+pivot_x;
    y4=pr.second+pivot_y;
    mdx+=160;
    mdy+=20;
    line(mdx+x1*factor_for_display,mdy-y1*factor_for_display,mdx+x2*factor_for_display,mdy-y2*factor_for_display);
    line(mdx+x2*factor_for_display,mdy-y2*factor_for_display,mdx+x3*factor_for_display,mdy-y3*factor_for_display);
    line(mdx+x3*factor_for_display,mdy-y3*factor_for_display,mdx+x4*factor_for_display,mdy-y4*factor_for_display);
    line(mdx+x1*factor_for_display,mdy-y1*factor_for_display,mdx+x4*factor_for_display,mdy-y4*factor_for_display);

    outtextxy(textx+220,texty,"After Rotation:");

    //for scaling

    int x_scale_factor=2,y_scale_factor=3;
    x1=x1*x_scale_factor;
    y1=y1*y_scale_factor;

    x2=x2*x_scale_factor;
    y2=y2*y_scale_factor;

    x3=x3*x_scale_factor;
    y3=y3*y_scale_factor;

    x4=x4*x_scale_factor;
    y4=y4*y_scale_factor;
    mdx+=150;
    mdy+=150;
    line(mdx+x1*factor_for_display,mdy-y1*factor_for_display,mdx+x2*factor_for_display,mdy-y2*factor_for_display);
    line(mdx+x2*factor_for_display,mdy-y2*factor_for_display,mdx+x3*factor_for_display,mdy-y3*factor_for_display);
    line(mdx+x3*factor_for_display,mdy-y3*factor_for_display,mdx+x4*factor_for_display,mdy-y4*factor_for_display);
    line(mdx+x1*factor_for_display,mdy-y1*factor_for_display,mdx+x4*factor_for_display,mdy-y4*factor_for_display);
    outtextxy(textx+350,texty,"After Scaling:");
    //line(x1,y1,x2,y2);
    getchar();
}

