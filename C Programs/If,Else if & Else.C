main()
{
float p;
clrscr();
printf("Enter Your Percentage :");
scanf("%f",&p);
if(p>90)
{
printf("First Division");
printf("Congratulations..");
}
else if(p>80)
printf("Second Division");
else if(p>70)
printf("Third Division");
else if(p>60)
printf("Fourth Division");
else if(p>50)
printf("Fifth Division");
else if(p>40)
printf("Sixth Division");
else
{
printf("Fail");
printf("Needs Improvement");
}
getch();
}
