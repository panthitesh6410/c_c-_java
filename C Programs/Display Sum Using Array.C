main()
{
int a[6];
clrscr();
printf("Enter First Number :");
scanf("%d",&a[0]);
printf("\nEnter Second Number :");
scanf("%d",&a[1]);
printf("\nEnter Third Number :");
scanf("%d",&a[2]);
printf("\nEnter Fourth Number :");
scanf("%d",&a[3]);
printf("\nEnter Fifth Number :");
scanf("%d",&a[4]);
a[5]=a[0]+a[1]+a[2]+a[3]+a[4];
printf("\n\nSum :%d",a[5]);
getch();
}