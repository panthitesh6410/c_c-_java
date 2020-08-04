// You Have To Initialize Only First Value While Combining Array,loop & pointer
//p[0]=&A[0]

main()
{
int i;
int k=1;
int A[6];
int *p[6];
p[0]=&A[0];
*p[5]=0;
clrscr();
for(i=0;i<=4;i++)
{
printf("\nEnter %d Number :",k);
scanf("%d",&*p[i]);
*p[5]=*p[5] + *p[i];
k++;
}
printf("\nSum :%d",*p[5]);
getch();
}