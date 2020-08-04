#include<stdio.h>
main()
{
int a;
char b[50];
char c;
clrscr();
printf("Enter Your Age :");
scanf("%d",&a);
fflush(stdin);
printf("\nEnter Your Name :");
scanf("%s",&b);
fflush(stdin);
printf("\nEnter Your Gender :");
scanf("%c",&c);
fflush(stdin);
printf("YOUR DETAILS ARE :-");
printf("\nAge :%d",a);
printf("\nName :%s",b);
printf("\nGender :%c",c);
getch();
}
