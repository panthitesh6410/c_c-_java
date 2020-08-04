main()
{
int i,num;
int ec=0,oc=0;
clrscr();
printf("\nEnter Ten Numbers :\n");
for(i=0;i<10;i++)
{
scanf("%d",&num);
if(num%2==0)
{
ec++;
}
else
{
oc++;
}
}
printf("\nThe Total Even Numbers Are :%d",ec);
printf("\nThe Total Odd Numbers Are :%d",oc);
getch();
}