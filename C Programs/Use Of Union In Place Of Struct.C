//Union Prints Last Value In The All Preceeding Ones
union data
{
int a;
int b;
int c;
}
main()
{
union data key;
clrscr();
printf("Enter First Number :");
scanf("%d",&key.a);
printf("\nEnter Second Numnber :");
scanf("%d",&key.b);
key.c=key.a+key.b;
printf("\nSum :%d",key.c);
getch();
}