/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
# include<stdio.h>
# include<conio.h>
void avg(int b[][5],int x,int y);
void main()
{
int a[10][10],m,i,j,n;
clrscr();
printf("Enter the row\t\t");
scanf("%d",&m);
printf("Enter the column\t");
scanf("%d",&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("Enter element a[%d][%d]",i,j);
scanf("%d",&a[i][j]);
}}

avg(a,m,n);
getch();
}

void avg(int b[][5],int x,int y)
{
int i,j,sm=0,avg;
for(i=0;i<x;i++)
{
sm=0;
for(j=0;j<y;j++)
{
sm=sm +b[i][j] ;
}
printf("\nSum is %d",sm);
avg=sm/(y);
printf("\n\nAvg of row%d is \t%d\n\n",i+1,avg);
}


for(j=0;j<y;j++)
{
sm=0;
for(i=0;i<x;i++)
{
printf("\ni=%d\nj=%d\nb=%d\n",i,j,b[i][j]);
sm=sm +b[i][j] ;
}
printf("\nSum is %d",sm);
avg=sm/(x);
printf("\nAvg of column%d is \t%d",i,avg);
}
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */