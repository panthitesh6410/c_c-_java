main()
{
int n;
int r;
float f;
clrscr();
printf("Enter The Values Of N And R :\n");
scanf("%d %d",&n,&r);
f=fact(n)/fact(n-r);
printf("npr Value Is :%5.2f",f);
getch();
}
fact(int n)
{
int i;
int f=1;
for(i=1;i<=n;i++)
f=f*i;
return(f);
}