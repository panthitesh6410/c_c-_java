#include<stdio.h>
main()
{
char a[50];
int b;
char c;
clrscr();
printf("Enter Your Name :");
gets(a);
printf("Enter Your Age :");
scanf("%d",&b);
fflush(stdin);
printf("Enter Your Gender :");
scanf("%c",&c);
fflush(stdin);
printf("\nYOUR DETAILS ARE :");
printf("\nName :%s",a);
printf("\nAge :%d",b);
printf("\nGender :%c",c);
getch();
}