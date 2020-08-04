main()
{
int a=8;
int b=9;
float c=8.8;
float d=9.9;
char e='P';
char f='M';
char g[50]="Prakhar";
char h[50]="Mor";
int *p1;
int *p2;
float *p3;
float *p4;
char *p5;
char *p6;
char *p7;
char *p8;
p1=&a;
p2=&b;
p3=&c;
p4=&d;
p5=&e;
p6=&f;
p7=&g;
p8=&h;
clrscr();
printf("\n\nAdress Of a=%u : Value of a=%d",p1,*p1);
printf("\n\nAdress Of b=%u : Value of b=%d",p2,*p2);
printf("\n\nAdress Of c=%u : Value of c=%f",p3,*p3);
printf("\n\nAdress Of d=%u : Value Of d=%f",p4,*p4);
printf("\n\nAdress Of e=%u : Value Of e=%c",p5,*p5);
printf("\n\nAdress Of f=%u : Value Of f=%c",p6,*p6);
printf("\n\nAdress Of g=%u : Value Of g=%c",p7,*p7);
printf("\n\nAdress Of h=%u : Value Of h=%c",p8,*p8);
getch();
}
