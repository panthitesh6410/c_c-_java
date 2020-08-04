//Program To Draw A Line
#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"..//BGI");
line(100,100,200,200);
getch();
closegraph();
}