//Dislaying Sum Of 5 Numbers Using Array,Loop And Pointer

main()
{
int C[6];
int k=1;
int i;
int *p[6];
int A[5];
int B[6];
B[5]=0;
p[0]=&C[0];
p[1]=&C[1];
p[2]=&C[2];
p[3]=&C[3];
p[4]=&C[4];
p[5]=&C[5];
clrscr();
printf("DISPLAYING SUM OF 5 NUMBERS USING ARRAY :");
printf("\n----------------------------------------");
printf("\n\nEnter First Number :");
scanf("%d",&A[0]);
printf("\nEnter Second Number :");
scanf("%d",&A[1]);
printf("\nEnter Third Number :");
scanf("%d",&A[2]);
printf("\nEnter Fourth Number :");
scanf("%d",&A[3]);
printf("\nEnter Fifth Number :");
scanf("%d",&A[4]);
A[5]=A[0]+A[1]+A[2]+A[3]+A[4];
printf("\nSum :%d",A[5]);
printf("\n\nDISPLAYING SUM OF 5 NUMBERS USING LOOP");
printf("\n--------------------------------------");
for(i=0;i<=4;i++)
{
printf("\nEnter %d Number :",k);
scanf("%d",&B[i]);
B[5]=B[5]+B[i];
k++;
}
printf("\nSum :%d",B[5]);
printf("\n\nDISPLAYING SUM OF 5 NUMBERS USING POINTERS");
printf("\n------------------------------------------");
printf("\n\nEnter First Number :");
scanf("%d",&*p[0]);
printf("\nEnter Second Number :");
scanf("%d",&*p[1]);
printf("\nEnter Third Number :");
scanf("%d",&*p[2]);
printf("\nEnter Fourth Number :");
scanf("%d",&*p[3]);
printf("\nEnter Fifth Number :");
scanf("%d",&*p[4]);
*p[5]=*p[0] + *p[1] + *p[2] + *p[3] + *p[4];
printf("\nSum :%d",*p[5]);
getch();
}