main()
{
int i;
int n;
int *a;
int *b;
int *c;
printf("How Many Elements In Each Array :\n");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
b=(int*)malloc(n*sizeof(int));
printf("\nEnter Elemnts Of First List :\n");
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
printf("\nEnter Elements Of Second List :\n");
for(i=0;i<n;++i)
{
scanf("%d",b+i);
}
for(i=0;i<n;i++)
{
*(c+i)=*(a+i) + *(b+i);
}
printf("\nResultant List Is :\n");
for(i=0;i<n;i++)
{
printf("%d\n",*(c+i));
}
getch();
}