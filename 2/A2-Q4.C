# include <stdio.h>
# include <conio.h>
void main()
{
int num,rev;
clrscr();
printf("Specify the Number");
scanf("%d",&num);

while(num>0)
{
rev=num%10;
num=(num-rev)/10;
printf("%d",rev);
}
getch();
}
