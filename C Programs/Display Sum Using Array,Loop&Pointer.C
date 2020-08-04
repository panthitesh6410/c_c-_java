//Dislaying Sum Of 5 Numbers Using Array,Loop And Pointer

main()
{
int a;
int b;
int c;
int d;
int e;
int f;
int k=1;
int i;
int *p1;
int *p2;
int *p3;
int *p4;
int *p5;
int *p6;
int A[5];
int B[6];
B[5]=0;
p1=&a;
p2=&b;
p3=&c;
p4=&d;
p5=&e;
p6=&f;
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
scanf("%d",&*p1);
printf("\nEnter Second Number :");
scanf("%d",&*p2);
printf("\nEnter Third Number :");
scanf("%d",&*p3);
printf("\nEnter Fourth Number :");
scanf("%d",&*p4);
printf("\nEnter Fifth Number :");
scanf("%d",&*p5);
*p6=*p1 + *p2 + *p3 + *p4 + *p5;
printf("\nSum :%d",*p6);
getch();
}