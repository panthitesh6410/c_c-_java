#include<graphics.h>
#include<conio.h>
main()
{
int driver=DETECT,mode;
clrscr();
initgraph(&driver,&mode,"");
setlinestyle(DOTTED_LINE,8,THICK_WIDTH);
rectangle(450,350,150,150);
circle(500,250,50);
line(300,200,350,300);
line(300,200,250,300);
line(350,300,250,300);
getch();
}