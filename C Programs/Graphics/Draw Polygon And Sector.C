#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
int gd=DETECT,gm;
int poly[]={320,150,420,300,250,300,320,150};
clrscr();
initgraph(&gd,&gm,"..//BGI");
sector(150,400,30,300,100,50);
drawpoly(4,poly);
getch();
closegraph();
}