# include<stdio.h>
# include<conio.h>
float sum(float x);
void main()
{
float num,sm;
clrscr();
printf("Enter the number\t\t");
scanf("%f",&num);
sm=sum(num);
printf("\nSum is %f",sm);
getch();
}

float sum(float x)
{
float sm;
if(x<=0)
{
return (0);
}
else
{
sm=(1/x)+sum(x-1);
}
return (sm);
}
