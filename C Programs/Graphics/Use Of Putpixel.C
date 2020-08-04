#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
int gd,gm,i;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"..//BGI");
while(!kbhit())
{
cleardevice();
for(i=1;i<=500;i++)
putpixel(random(640),random(500),15);
settextstyle(1,0,6);
outtextxy(145,200,"Prakhar Is Great");
delay(2000);
}
getch();
}


