main()
{
int i=1;
clrscr();
printf("Display Hello 10 Times :\n\n");
while(i<=10)
{
printf(" Hello");
i=i+1;
}
i=1;
printf("\n\nDisplay First 10 Natural Numbers :\n\n");
while(i<10)
{
printf(" %d",i);
i++;
}
i=1;
printf("\n\nDisplay All Odd Numbers Upto 10 :\n\n");
while(i<10)
{
printf(" %d",i);
i=i+2;
}
i=2;
printf("\n\nDisplay All Even Numbers Upto 10 :\n\n");
while(i<10)
{
printf(" %d",i);
i=i+2;
}
getch();
}