main()
{
int i;
char a[50];
char b[50]="Ranjhi";
clrscr();
printf("Enter Your Name :");
gets(a);
printf("Your Name Is :%s",a);
i=strcmp(b,a);
printf("\nDiferrence Between Strings 'a' & 'b' Is :%d",i);
getch();
}