#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
textcolor(BLUE);
textbackground(WHITE);
cprintf("Text Colour Is Blue With White Background");
textcolor(RED+BLINK);
cprintf("\nText Colour Is Red With Blinking");
getch();
}