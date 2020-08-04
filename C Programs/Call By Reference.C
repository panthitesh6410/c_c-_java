prakhar(int *a,int *b)
{
*a=*a+1;
*b=*b+1;
printf("\nResultant:%d & %d",*a,*b);
}
main()
{
int a;
int b;
clrscr();
printf("\nEnter First Number :");
scanf("%d",&a);
printf("\nEnter Second Number :");
scanf("%d",&b);
printf("\nInput    :%d & %d",a,b);
prakhar(&a,&b);
printf("\nInput    :%d & %d",a,b);
getch();
}