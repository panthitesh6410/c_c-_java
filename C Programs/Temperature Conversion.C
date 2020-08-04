main()
{
float c;
float f;
float k;
clrscr();
printf("TEMPERATURE CONVERSION");
printf("\n-----------------------");
printf("\nEnter The Temperature In Celcius :");
scanf("%f",&c);
f=(9*c)/5+32;
k=(c+273);
printf("\nTemperature In Fahrenhite :%f",f);
printf("\n\nTemperature In Kelvin :%f",k);
getch();
}
