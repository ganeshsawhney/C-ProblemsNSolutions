#include<stdio.h>
#include<conio.h>
void main()
{
float a[99],i,avg,sum,freq,l,temp1,temp2;
clrscr();
for(i=0;i<100;i++)
{
	printf("Enter the no.");
	scanf("%f",&temp1);
	if(temp1>=0)
	{
	a[i]=temp1;
	}
	else
	{
	printf("No. is negative");
	}

	printf("to enter more press1 else press2");
	scanf("%f",&temp2);

	if(temp2==1)
	{   ;
	}
	else if (temp2==2)
	{
	freq=i;
	break;
	}
}
for (l=0;l<=freq;l++)
{
sum = sum +a[l];
}
avg=sum/(freq+1);
printf("%f",avg);
getch();
}