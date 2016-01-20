#include<stdio.h>
#include<conio.h>
void main()
{
int num , sum=0 , i;
clrscr();
printf("Enter the no.");
scanf("%d",&num);
for(i=num;i>=0;i--)
{
sum =sum + (i*i);
}
printf("sum is %d", sum);
getch();
}