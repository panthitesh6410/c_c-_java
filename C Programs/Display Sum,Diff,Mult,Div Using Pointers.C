main()
{
float a;
float b;
float c;
float d;
float e;
float f;
float *p1;
float *p2;
float *p3;
float *p4;
float *p5;
float *p6;
p1=&a;
p2=&b;
p3=&c;
p4=&d;
p5=&e;
p6=&f;
clrscr();
printf("Enter First Number :");
scanf("%f",&*p1);
printf("\nEnter Second Number :");
scanf("%f",&*p2);
*p3 = *p1 + *p2;
*p4 = *p1 - *p2;
*p5 = *p1 * *p2;
*p6 = *p1 / *p2;
printf("\nSum :%f",*p3);
printf("\nDifference :%f",*p4);
printf("\nMultiplication :%f",*p5);
printf("\nDivision :%f",*p6);
getch();

}