main()
{
int a[6];
int i=0;
int k=1;
a[5]=0;
clrscr();
while(i<=4)
{
printf("Enter %d Number :",k);
scanf("%d",&a[i]);
a[5]=a[5]+a[i];
k++;
i++;
}
printf("\n\nSum :%d",a[5]);
getch();
}