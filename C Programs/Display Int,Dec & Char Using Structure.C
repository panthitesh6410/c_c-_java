struct data
{
int a;
float b;
char c;
};
main()
{
struct data key;
clrscr();
key.a=10;
printf(" %d",key.a);
key.b=8.8;
printf(" %f",key.b);
key.c='P';
printf(" %c",key.c);
getch();
}