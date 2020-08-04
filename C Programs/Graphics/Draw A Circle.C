//Program To Draw A Circle
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gm;
int x;
int y;
int radius=80;
clrscr();
initgraph(&gd,&gm,"..//BGI");
x=getmaxx()/2;
y=getmaxx()/2;
outtextxy(x-100,50,"Circle Using Graphics In C");
circle(x,y,radius);
getch();
closegraph();
getch();
}