main()
{
int A[2]={10,20};
int B[2][2]={10,20,30,40};
int C[2][2][2]={10,20,30,40,50,60,70,80};
clrscr();
printf("\n Example Of 1d Array :%d %d",A[0],A[1]);
printf("\n\n Example Of 2d Array :%d %d %d %d",B[0][0],B[0][1],B[1][0],B[1][1]);
printf("\n\n Example Of 3d Array :%d %d %d %d %d %d %d %d",C[0][0][0],C[0][0][1],C[0][1][0],C[0][1][1],C[1][0][0],C[1][0][1],C[1][1][0],C[1][1][1]);
getch();
}