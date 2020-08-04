main()
{
int a, b, x, y, t, gcd, lcm;
printf("Enter Two Integers\n");
scanf("%d%d", &x, &y);
a = x;
b = y;
while (b != 0)
{
t = b;
b = a % b;
a = t;
}
gcd = a;
lcm = (x*y)/gcd;
printf("Greatest Common Divisor Of %d And %d = %d\n", x, y, gcd);
printf("Least Common Multiple Of %d And %d = %d\n", x, y, lcm);
getch();
}