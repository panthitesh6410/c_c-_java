//Array Within Struture

struct data
{
int a[10];
int sum;
};
main()
{
struct data key;
int i;
key.sum=0;
clrscr();
printf("\nEnter  Number :");
for(i=0;i<=9;i++)
{
scanf("%d",&key.a[i]);
key.sum=key.sum+key.a[i];
}
printf("Sum :%d",key.sum);
getch();
}