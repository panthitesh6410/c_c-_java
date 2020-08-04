#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"..//BGI");
setcolor(RED);
circle(100,100,50);
floodfill(100,100,RED);
getch();
closegraph();
}