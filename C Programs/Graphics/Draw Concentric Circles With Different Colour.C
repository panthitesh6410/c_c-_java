//Program To Draw Concentric Circles
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
outtextxy(x-80,150,"Concentric Circles");
setcolor(RED);
circle(x,y,30);
setcolor(GREEN);
circle(x,y,50);
setcolor(YELLOW);
circle(x,y,70);
setcolor(BLUE);
circle(x,y,90);
getch();
closegraph();
}
