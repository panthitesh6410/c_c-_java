main()
{
char a[50];
char b[50]="Ranjhi";
char c[50];
int i;
clrscr();
printf("Enter Your Name :");
gets(a);
i=strlen(a);//String Length(Used To Find The Length Of String)
strcat(b,a);//String Congant(Used To Add Two String)
strcpy(c,a);//String Copy(Used To Copy One String To Another)
printf("\nYour Name Is :%s",a);
printf("\n\nSum Of 'b' & 'a' Is :%s",b);
printf("\n\nCopy Of 'a' In 'c' Is :%s",c);
printf("\n\nLength Of String 'a' Is :%d",i);
getch();
}