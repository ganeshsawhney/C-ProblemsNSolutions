#include<stdio.h>
#include<conio.h>
void main()
{
float sum=0,i,a[100],b;
clrscr();
printf("Enter total numbers to be entered");
scanf("%f", &b);
for (i=0;i<b;i++)
{
printf("Enter the element");
scanf("%f",&a[i]);
sum = sum +a[i];
}
printf("%f",sum);
getch();
}