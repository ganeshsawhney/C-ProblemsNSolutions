#include<stdio.h>
#include<conio.h>
void main()
{
int i,k,j,z;
clrscr();
for(i=5;i>=0;i--)
{

for(k=i;k>=0;k--)
{
printf(" ");
}

for(z=0;z<=5-i;z++)
{
printf("*");
}
printf("\n");
}
getch();
}
