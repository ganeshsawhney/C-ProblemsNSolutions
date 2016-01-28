#include<stdio.h>
#include<conio.h>
void main()
{
int ls=0,rs=0,r,c,k,l,i,j,a[100][100];
clrscr();
for(i=100;i>0;i++)
{
printf("Enter Rows");
scanf("%d", &r);
printf("Enter Columns");
scanf("%d", &c);
if(r==c)
{
break;
}
else
{
printf("Row not equal to column");
}}
for (i=0;i<r;i++)
{
for (j=0;j<c;j++)
{
printf("enter element %d%d",i,j);
scanf("%d",&a[i][j]);
}
}
for (i=0;i<c;i++)
{
for (j=0;j<r;j++)
{
if(i==j)
{
ls=ls+a[i][j];
}
if((i+j)==(r-1))
{
rs=rs+a[i][j];
}
}}
printf("Left Diagnol sum is %d\n",ls);
printf("Right Diagnol sum is %d",rs);
getch();
}