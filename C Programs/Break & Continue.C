main()
{
int a;
clrscr();
for(a=1;a<=20;a++)
{
if(a==10)
break;
printf(" %d",a);
}
printf("\n");
for(a=1;a<=20;a++)
{
if(a==10)
continue;
printf(" %d",a);
}
getch();
}
