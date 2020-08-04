main()
{
int num,i,temp;
clrscr();
i=0;
printf("Enter A Number :");
scanf("%d",&num);
temp=num;
while(i<9)
{
printf("\nEnter A Number :");
scanf("%d",&num);
if(temp>num);
{
temp=num;
}
i++;
}
printf("\n\nThe Smallest Number Is :%d",temp);
getch();
}
