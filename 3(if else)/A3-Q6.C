# include <stdio.h>
# include <conio.h>
void main()
{
float tm;
clrscr();
printf("Specify the Time");
scanf("%f",&tm);

if(tm<100)
{
printf("Rate is 0 Rupees");
}
else if(tm>99 && tm<200)
{
printf("Rate is 1 Rupees");
}
else if(tm>199 && tm<300)
{
printf("Rate is 2 Rupees");
}
else
{
printf("Rate is 5 Rupees");
}
getch();
}
