main()
{
int n1;
int n2;
int i;
int *p;
clrscr();
printf("Enter The Size Of Array :");
scanf("%d",&n1);
p=(int*)malloc(n1*sizeof(int));
printf("\nAdress Of Previously Allocated Memory :");
for(i=0;i<n1;i++)
{
printf(" %u",p+i);
}
printf("\n\nEnter The Size Of New Array :");
scanf("%d",&n2);
p=realloc(p,n2);
printf("\nAdress Of New Allocated Memory :");
for(i=0;i<n2;i++)
{
printf(" %u",p+i);
}
getch();
}