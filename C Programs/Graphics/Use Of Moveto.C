#include<graphics.h>
main()
{
int driver,mode;
clrscr();
driver=DETECT;
initgraph(&driver,&mode,"");
line(80,10,80,500);
line(10,100,700,100);
line(550,10,550,500);
line(40,403,700,403);
moveto(80,100);
lineto(550,403);
moveto(550,100);
lineto(80,403);
getch();
}