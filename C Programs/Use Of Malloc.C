#include<stdio.h>
main()
{
int i;
int n;
int *ptr;
int sum;
sum=0;
clrscr();
printf("Enter No. Of Elements Of Array :");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
printf("Error! Memory Not Allocated");
exit(0);
}
printf("Enter Elements Of Array :");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
printf("Display Elements Of Array :");
for(i=0;i<n;i++)
{
printf(" %d",*(ptr+i));
}
for(i=0;i<n;i++)
{
sum=sum+*(ptr+i);
}
printf("\nSum :%d",sum);
getch();
free(ptr);
}
