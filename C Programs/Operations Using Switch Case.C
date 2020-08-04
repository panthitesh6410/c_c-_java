#include<stdio.h>
main()
{
int a;
int b;
int c;
char d;
clrscr();
printf("Enter First Number :");
scanf("%d",&a);
fflush(stdin);
printf("\nEnter Second Number :");
scanf("%d",&b);
fflush(stdin);
printf("\nEnter '+' or '-' or '*' or '/' :");
scanf("%c",&d);
fflush(stdin);
switch(d)
{
case '+':
c=a+b;
printf("\nSum Is :%d",c);
break;
case '-':
c=a-b;
printf("\nDifference Is :%d",c);
break;
case '*':
c=a*b;
printf("\nMultiplication Is :%d",c);
break;
case '/':
c=a/b;
printf("\nDivision Is :%d",c);
break;
default:
printf("\nWrong Choice");
}
getch();
}

