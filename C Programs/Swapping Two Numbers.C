main()
{
int x,y,temp;
clrscr();
printf("Enter The Value Of x And y :\n");
scanf("%d %d",&x,&y);
printf("Before Swapping :\nx=%d\ny=%d\n",x,y);
temp=x;
x=y;
y=temp;
printf("After Swaping :\nx=%d\ny=%d\n",x,y);
getch();
}