main()
{
float p;
float r;
float t;
float i;
clrscr();
printf("Enter Principal Amount :");
scanf("%f",&p);
printf("Enter Rate :");
scanf("%f",&r);
printf("Enter Time :");
scanf("%f",&t);
i=(p*r*t)/100;
printf("Simple Interest :%.1xf",i);
getch();
}