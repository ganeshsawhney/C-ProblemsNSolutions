#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,k,l,i,j,a[100][100],b[100][100];
clrscr();
printf("Enter Rows");
scanf("%d", &r);
printf("Enter Columns");
scanf("%d", &c);
for (i=0;i<r;i++)
{
for (j=0;j<c;j++)
{
printf("enter element %d%d",i,j);
scanf("%d",&a[i][j]);
}
}
printf("Transpose of matrix is \n");
for (k=0;k<c;k++)
{
for (l=0;l<r;l++)
{
b[k][l]=a[l][k];
printf("Element %d%d is %d\n",k,l,b[k][l]);
}
}
getch();
}