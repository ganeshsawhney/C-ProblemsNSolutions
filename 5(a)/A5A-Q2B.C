#include<stdio.h>
#include<conio.h>
void main()
{
int num , sum=0 , i;
clrscr();
printf("Enter the no.");
scanf("%d",&num);
while(num>=0)
{
sum =sum + (num*num);
num=num--;
}
printf("sum is %d", sum);
getch();
}