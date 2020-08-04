#include<graphics.h>
main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"..//BGI");
line(50,125,100,125);//Horizontal Line -Ve Terminal
line(50,175,100,175);//Horizontal Line +ve Terminal
line(100,100,100,200);//Vertical Line
line(100,100,150,150);//Top To Bottom Slant Line
line(150,150,100,200);//Bottom To Top Slant Line
line(125,100,125,125);//Vertical Line +VCC
line(125,175,125,200);//Vertical Line -VCC
line(150,150,200,150);//Horizontal Line
getch();
closegraph();
}