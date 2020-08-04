//Program To Draw An Ellipse
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
int gd=DETECT,gm;
int x;
int y;
initgraph(&gd,&gm,"..//BGI");
x=getmaxx()/2;
y=getmaxx()/2;
outtextxy(x-100,50,"Ellipse Using Graphics In C");
ellipse(x,y,0,360,120,60);
getch();
closegraph();
}