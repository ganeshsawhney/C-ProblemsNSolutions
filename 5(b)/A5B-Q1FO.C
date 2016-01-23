#include<stdio.h>
#include<conio.h>
void main()
{
float s,e,div,i,prod;
clrscr();
printf("Enter starting value");
scanf("%f", &s);
printf("Enter ending value");
scanf("%f", &e);
printf("Enter divisor");
scanf("%f", &div);
for (i=0;i<=e;i++)
{
prod = div * i;
if(prod>=s && prod<=e)
{
printf("%f",prod);
printf("\n");
}
else{;}
}
getch();
}