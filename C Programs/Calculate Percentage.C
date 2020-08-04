main()
{
int a;
int b;
int c;
int d;
float p;
clrscr();
printf("Enter Your Mathematics Marks :");
scanf("%d",&a);
printf("Enter Your Chemistry Marks :");
scanf("%d",&b);
printf("Enter Your Physics Marks :");
scanf("%d",&c);
printf("Enter Your English Marks :");
scanf("%d",&d);
p=(a+b+c+d)/4;
printf("Your Percentage Is :%f",p);
getch();
}