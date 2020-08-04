#include<graphics.h>
main()
{
int gd=DETECT,gm;
int x;
int y;
int k,l;
clrscr();
initgraph(&gd,&gm,"..//BGI");
x=getmaxx()/2;
y=getmaxy()/2;
printf("Maximum Value Of X :%d",x*2);
printf("  Half Value(k) :%d",x);
printf("\nMaximum Value Of Y :%d",y*2);
printf("  Half Value(l) :%d",y);
k=x;
l=y;
outtextxy(319,239,"(319,239)");
setcolor(1);
circle(x,y,30);
outtextxy(319,219,"30");
setcolor(2);
circle(x,y,50);
outtextxy(319,199,"50");
setcolor(3);
circle(x,y,70);
outtextxy(319,179,"70");
setcolor(4);
circle(x,y,90);
outtextxy(319,159,"90");
setcolor(5);
circle(x,y,109);
outtextxy(319,139,"110");
setcolor(6);
circle(x,y,130);
outtextxy(319,119,"130");
setcolor(7);
circle(x,y,150);
outtextxy(319,99,"150");
setcolor(8);
circle(x,y,170);
outtextxy(319,79,"170");
setcolor(9);
circle(x,y,190);
line(319,239,319,49);
line(319,239,129,239);
outtextxy(319,59,"190");
getch();
}
