main()
{
char a[50]="maa";
char b[50];
int i;
clrscr();
printf("Enter Your Password :");
gets(b);
i=strcmp(b,a);
if(i==0)
printf("\nYour Password Is Correct");
else
printf("\nYour Password Is Incorrect");
getch();
}
