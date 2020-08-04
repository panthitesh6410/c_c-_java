main()
{
int a;
int b;
int c;
int *p1;
int *p2;
int *p3;
p1=&a;
p2=&b;
p3=&c;
clrscr();
printf("Enter First Number :");
scanf("%d",&*p1);
printf("\nEnter Second Number :");
scanf("%d",&*p2);
*p3 = *p1 + *p2;
printf("\nSum :%d",*p3);
getch();
}