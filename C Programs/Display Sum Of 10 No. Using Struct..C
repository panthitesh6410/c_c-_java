struct data
{
int a,b,c,d,e,f,g,h,i,j,k,l;
};
main()
{
struct data key;
clrscr();
printf("\nEnter First Number :");
scanf("%d",&key.a);
printf("\nEnter Second Number :");
scanf("%d",&key.b);
printf("\nEnter Third Number :");
scanf("%d",&key.c);
printf("\nEnter Fourth Number :");
scanf("%d",&key.d);
printf("\nEnter Fifth Number :");
scanf("%d",&key.e);
printf("\nEnter Sixth Number :");
scanf("%d",&key.f);
printf("\nEnter Seventh Number :");
scanf("%d",&key.g);
printf("\nEnter Eigth Number :");
scanf("%d",&key.i);
printf("\nEnter Ninth Number :");
scanf("%d",&key.j);
printf("\nEnter Tenth Number :");
scanf("%d",&key.k);
key.l=key.k+key.a+key.b+key.c+key.d+key.e+key.f+key.g+key.h+key.i+key.j;
printf("Sum :%d",key.l);
getch();
}