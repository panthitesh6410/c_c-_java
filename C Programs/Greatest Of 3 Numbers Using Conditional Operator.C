//To Find The Greatest Of Three Numbers By Conditional Operators
main()
{
int x;
int y;
int z;
int n1;
int n2;
clrscr();
printf("Enter Three Numbers :\n");
scanf("%d %d %d",&x,&y,&z);
n1=x>y?x:y;
n2=n1>z?n1:z;
printf("\nThe Biggest Number Is :%d",n2);
getch();
}