/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
void main()
{
int r,cl,i,j,a[100][100],b[100][100],c[100][100];
clrscr();
printf("Enter Rows");
scanf("%d", &r);
printf("Enter Columns");
scanf("%d", &cl);
for (i=0;i<r;i++)
{
for (j=0;j<cl;j++)
{
printf("enter element %d%d of matrix A",i,j);
scanf("%d",&a[i][j]);
}
}
for (i=0;i<r;i++)
{
for (j=0;j<cl;j++)
{
printf("enter element %d%d of matrix B",i,j);
scanf("%d",&b[i][j]);
}}
for (i=0;i<r;i++)
{
for (j=0;j<cl;j++)
{
c[i][j]=a[i][j]+b[i][j];
}}
for (i=0;i<r;i++)
{
for (j=0;j<cl;j++)
{
printf("Element %d%d of new matrix is %d\n",i,j,c[i][j]);
}}
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
