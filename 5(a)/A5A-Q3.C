#include<stdio.h>
#include<conio.h>
void main()
{
int freq,a[100],num,rem,i=0;
clrscr();
printf("Enter the no.");
scanf("%d",&num);
while(num>0)
{
a[i]=num%2;
	if(num%2==0)
	{
	num=num/2;
	}
	else
	{
	num=(num-1)/2;
	}
freq=i;
i=i++;
}

for(i=freq;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}