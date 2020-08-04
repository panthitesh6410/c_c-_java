#include<math.h>
#include<stdio.h>
main()
{
long int num;
int root;
clrscr();
printf("Enter The Number You Want To Find The Square Root :");
scanf("%ld",&num);
root=sqrt(num);
printf("Square Root Of %ld Is :%d",num,root);
getch();
}