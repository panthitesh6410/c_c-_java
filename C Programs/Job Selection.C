#include<stdio.h>
main()
{
float a;
int b;
char c;
clrscr();
printf("Enter Your Percentage :");
scanf("%f",&a);
fflush(stdin);
printf("\nEnter Your Age :");
scanf("%d",&b);
fflush(stdin);
printf("\nEnter Your Gender :");
scanf("%c",&c);
fflush(stdin);
printf("\nYOUR DETAILS ARE :-");
printf("\nPercentage :%f",a);
printf("\nAge :%d",b);
printf("\nGender :%c",c);
if( (b>=18 && b<=25 && c=='F')||(a>95) )
{
printf("\nCongratulations...");
printf("\nYou Are Selected For The Job");
}
else
printf("\nYou Are Not Selected For The Job");
getch();
}