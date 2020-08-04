#include<stdio.h>
main()
{
int num,square;
char ans='y';
clrscr();
while(ans=='y'||ans=='Y')
{
printf("Enter A Number :");
scanf("%d",&num);
square=num*num;
printf("The Square Of %d Is %d",num,square);
printf("\nDo You Wish To Enter Another Number (y For Yes) :");
fflush(stdin);
scanf("%c",&ans);
}
getch();
}