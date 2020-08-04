main()
{
char p;
clrscr();
printf("Input A Character :");
scanf("%c",&p);
switch(p)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("It Is A Vowel");
break;
default:
printf("It Is Not A Vowel");
}
getch();
}