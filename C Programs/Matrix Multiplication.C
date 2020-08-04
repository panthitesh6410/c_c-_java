#include<stdio.h>
#include<conio.h>
void main()
{
int A[3][3];
int B[3][2];
int C[3][2];
int i,j,k;
clrscr();
 printf("please enter elements for a 3*3 matrix:\n");
 for(i=0;i<=2;i++)
 {
 printf("enter element at  A[%d][0] shell\t",i);
 scanf("%d",&A[i][0]);
   printf("enter element at  A[%d][1] shell\t",i);
 scanf("%d",&A[i][1]);

 printf("enter element at  A[%d][2] shell\t",i);
 scanf("%d",&A[i][2]);
 }
 printf("\nthe first matrix is:");
 for(i=0;i<=2;i++)

 printf("\n%d\t%d\t%d\t",A[i][0],A[i][1],A[i][2]);
 printf("\n\nplease entr elements for a 3*2matrix:\n");
 for(i=0;i<=2;i++)
 {

  printf("enter element at  B[%d][0] shell\t",i);
 scanf("%d",&B[i][0]);
  printf("enter element at  B[%d][0] shell\t",i);
 scanf("%d",&B[i][1]);

 }
 printf("\n the second matrix is:");
 for(i=0;i<=2;i++)
 printf("\n%d\t%d\t",B[i][0],B[i][1]);
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=1;j++)
 {
 C[i][j]=0;
 for(k=0;k<=2;k++)
 C[i][j]=C[i][j]+A[i][k]*B[j][k];
 }
 }
 printf("\n\nmultiplied matrix is:");
 for(i=0;i<=2;i++)
 printf("\n%d\t%d\t",C[i][0],C[i][1]);
 getch();
 }