//Program To Make Counter Using C Graphics
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
main()
{
int gd=DETECT,gm;
int i,midx,midy,count;
char string[100];
clrscr();
printf("Enter A Number :\n");
scanf("%d",&count);
initgraph(&gd,&gm,"X:\\TC\\BGI");
/* Get Mid Position In X And Y Axis */
midx=getmaxx()/2;
midy=getmaxx()/2;
for(i=0;i<=count;i++)
{
/* Draws The Gray Board */
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(midx-50,midy-50,midx+50,midy+50);
floodfill(midx,midy,WHITE);
/*Place The Counter Inside Rectangle*/
setcolor(BLUE);
sprintf(string,"%s","Counter");
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(midx,midy-100,"Counter");
/*Print The Counter Value*/
sprintf(string,"%d",i);
outtextxy(midx,midy,string);
/*Delay For A Second(1000 milli second) */
delay(1000);
/* Clears Screen */
cleardevice();
}
getch();
closegraph();
}