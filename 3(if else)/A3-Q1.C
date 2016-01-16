# include<stdio.h>
# include<conio.h>
void main()
{
int x,y,z;
clrscr();
printf("Specify the Number-1");
scanf("%d",&x);
printf("Specify the Number-2");
scanf("%d",&y);
z=x;
x=y;
y=z;
printf("1 = %d",x);
printf("2 = %d",y);
getch();
}
