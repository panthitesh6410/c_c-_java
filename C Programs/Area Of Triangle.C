#include<stdio.h>
main()
{
int a;
int b;
float Area;
clrscr();
printf("DISPLAY THE AREA OF A TRIANGLE");
printf("\n------------------------------");
printf("\nEnter The Value Of Base :");
scanf("%d",&a);
fflush(stdin);
printf("\nEnter The Value Of Height :");
scanf("%d",&b);
fflush(stdin);
Area=(a*b)/2;
printf("\nArea Of The Triangle :%f",Area);
getch();
}

