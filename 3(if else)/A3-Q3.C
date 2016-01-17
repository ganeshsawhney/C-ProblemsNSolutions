# include<stdio.h>
# include<conio.h>
void main()
{
int x,y,z;
clrscr();
printf("Specify the Numberx");
scanf("%d",&x);
printf("Specify the Numbery");
scanf("%d",&y);
printf("Specify the Numberz");
scanf("%d",&z);
if(y>x && y>z)
{
printf("y is greatest");
}
else if (x>z && x>y)
{
printf("x is greatest");
}
else
{
printf("z is greatest");
}
getch();
}
