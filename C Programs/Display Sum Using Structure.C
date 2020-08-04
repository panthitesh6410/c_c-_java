struct data
{
int a;
int b;
int c;
};
main()
{
struct data key;
clrscr();
printf("Enter First Number :");
scanf("%d",&key.a);
printf("\nEnter Second Number :");
scanf("%d",&key.b);
key.c=key.a+key.b;
printf("\nSum :%d",key.c);
getch();
}