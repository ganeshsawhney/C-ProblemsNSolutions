# include<stdio.h>
# include<conio.h>
void main()
{
int x,y;
clrscr();
printf("Specify the Number-1");
scanf("%d",&x);
printf("Specify the Number-2");
scanf("%d",&y);
x=x-y;
y=y+x;
x=y-x;
printf("1 = %d",x);
printf("2 = %d",y);
getch();
}
