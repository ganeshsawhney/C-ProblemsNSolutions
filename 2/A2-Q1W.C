# include<stdio.h>
# include<conio.h>
void main()
{
int y,x,num,sum=0;
clrscr();
printf("Specify the Number");
scanf("%d",&num);

while(num)
{
x=num%10;
sum=sum+x;
num=num/10;
}
printf("Sum=%d",sum);
getch();
}
