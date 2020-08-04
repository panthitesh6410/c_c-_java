//Program To Draw Rectangle And Bar Using C Graphics
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"..//BGI");
//To Draw Rectangle On The Screen
rectangle(150,50,400,150);//Left Upper And Right Bottom Corner
//To Draw Bar On The Screen
bar(150,200,400,350);//Left Upper And Right Bottom Corner
getch();
closegraph();
}
