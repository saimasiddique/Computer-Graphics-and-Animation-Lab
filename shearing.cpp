
#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
void disp(int n,float c[][3])
{
    float maxx,maxy;
    int i;
    maxx=getmaxx();
    maxy=getmaxy();
    maxx=maxx/2;
    maxy=maxy/2;
    i=0;
    while(i<n-1)
    {
        line(maxx+c[i][0],maxy-c[i][1],maxx+c[i+1][0],maxy-c[i+1][1]);
        i++;
    }
    i=n-1;
    line(maxx+c[i][0],maxy-c[i][1],maxx+c[0][0],maxy-c[0][1]);
    setcolor(GREEN);
    line(0,maxy,maxx*2,maxy);
    line(maxx,0,maxx,maxy*2);
    setcolor(WHITE);
}
void mul(int n,float b[][3],float c[][3],float a[][3])
{
    int i,j,k;
    for(i=0; i<n; i++)
        for(j=0; j<3; j++)
            a[i][j]=0;
    for(i=0; i<n; i++)
        for(j=0; j<3; j++)
            for(k=0; k<3; k++)
            {
                a[i][j]=a[i][j]+(c[i][k]*b[k][j]);
            }
}


void shearx(int n,float c[][3],float shx)
{
    int i=0,j;
    float b[10][3],a[10][3];
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            b[i][j]=0;
    b[0][0]=b[1][1]=b[2][2]=1;
    b[1][0]=shx;
    mul(n,b,c,a);
    setcolor(RED);
    disp(n,a);
}
void sheary(int n,float c[][3],float shy)
{
    int i=0,j;
    float b[10][3],a[10][3];
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            b[i][j]=0;
    b[0][0]=b[1][1]=b[2][2]=1;
    b[0][1]=shy;
    mul(n,b,c,a);
    setcolor(RED);
    disp(n,a);
}
int main()
{
    int i,j,k,cho,n,gd=DETECT,gm;
    float c[10][3],tx,ty,sx,sy,ra;
    initgraph(&gd,&gm," ");
    cout<<"Enter no. of vertices \t";
    cin>>n;
    for (i=0; i<n; i++)
    {
        cout<<"Enter coordinates of vertex \n",i+1;
        cin>>c[i][0]>>c[i][1];
        c[i][2]=1;
    }

    int cha;
    float shx,shy;
    do
    {
        cleardevice();
        cout<<"\n\t\t MENU ";
        cout<<"\n\t\t 1)X-shear";
        cout<<"\n\t\t 2)Y-shear";
        cout<<"\n\t Enter your Choice: \t";
        cin>>cha;
        switch(cha)
        {
        case 1:
            cout<<"\n\t Enter Shear factor: \t";
            cin>>shx;
            cleardevice();
            setcolor(15);
            disp(n,c);
            shearx(n,c,shx);
            getch();
            break;
        case 2:
            cout<<"\n\t Enter Shear factor: \t";
            cin>>shy;
            cleardevice();
            setcolor(15);
            disp(n,c);
            shearx(n,c,shy);
            getch();
            break;
        default:
            cout<<"\n\t Invalid Choice !!!";
            break;
        }
    }
     while(cho!=2);

    getch();
    closegraph();
}
