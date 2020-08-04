//Integer :2byte
//float :4byte
//character :1byte

main()
{
float a=8.8;
float b=9.9;
int c=8;
int d=9;
char e='P';
char f='M';
char g[70]="Prakhar";
char h[30]="Mor";
clrscr();
printf("\n\nAdress Of Integer c :");
printf("\n %d %u",c,&c);
printf("\n\nAdress Of Integer d :");
printf("\n %d %u",d,&d);
printf("\n\nAdress Of Decimal a :");
printf("\n %f %u",a,&a);
printf("\n\nAdress Of Decimal b :");
printf("\n %f %u",b,&b);
printf("\n\nAdress Of Character e :");
printf("\n %c %u",e,&e);
printf("\n\nAdress Of Character f :");
printf("\n %c %u",f,&f);
printf("\n\nAdress Of String g :");
printf("\n %s %u",g,&g);
printf("\n\nAdress Of String h :");
printf("\n %s %u",h,&h);
getch();
}