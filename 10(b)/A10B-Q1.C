# include<stdio.h>
# include<conio.h>
void sum(int c[][5],int x,int y);
int sumcol;
void main()
{
int a[10][10],m,i,j,n;
clrscr();
printf("Enter the row\t\t");
scanf("%d",&m);
printf("Enter the column\t");
scanf("%d",&n);
for(i=0;i<=m;i++)
{
for(j=0;j<=n;j++)
{
printf("Enter element a[%d][%d]",i,j);
scanf("%d",&a[i][j]);
}
}
printf("Enter the column");
scanf("%d",&sumcol);
sum(a,m,sumcol);
getch();
}

void sum(int c[][5],int x,int y)
{
int i,sm=0;
for(i=0;i<=x;i++)
{
sm=sm+c[i][y];
}
printf("\nSum is %d",sm);
}