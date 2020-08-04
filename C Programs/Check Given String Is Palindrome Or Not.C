main()
{
char a[100],b[100];
clrscr();
printf("Enter The String You Want To Check :");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("\nEntered String Is A Palindrome");
else
printf("\nEntered String Is Not A Palindrome");
getch();
}