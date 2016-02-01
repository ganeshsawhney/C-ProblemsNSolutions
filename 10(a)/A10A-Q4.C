# include<stdio.h>
# include<conio.h>
float inv(float rate,float iniv,int year);
void main()
{
int yr;
float rt,invest,ii;
clrscr();
printf("Enter the year\t\t");
scanf("%d",&yr);
printf("Enter the rate\t\t");
scanf("%f",&rt);
printf("Enter the initial investment\t\t");
scanf("%f",&ii);
invest=inv(rt,ii,yr);
printf("%f",ii+invest);
getch();
}

float inv(float rate,float iniv,int year)
{
float investment,final;
investment=(iniv*rate/100);
if(year>=1)
{
final=investment+inv(rate,iniv+investment,year-1);
}
else
{
final = 0;
}
return (final);
}
