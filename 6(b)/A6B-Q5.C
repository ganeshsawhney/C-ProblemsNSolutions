/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
void main()
{
int k,ra,cla,rb,clb,i,j,a[100][100],b[100][100],c[100][100];
clrscr();
for(i=0;i<100;i++)
{
printf("Enter Rows of matrix A");
scanf("%d", &ra);
printf("Enter Columns of matrix A");
scanf("%d", &cla);
printf("Enter Rows of matrix B");
scanf("%d", &rb);
printf("Enter Columns of matrix B");
scanf("%d", &clb);
	if(cla==rb)
	{
	break;
	}
	else
	{
	printf("Invalid array so enter again");
	}
}
for (i=0;i<ra;i++)
{
for (j=0;j<cla;j++)
{
printf("enter element %d%d of matrix A",i,j);
scanf("%d",&a[i][j]);
}
}
for (i=0;i<rb;i++)
{
for (j=0;j<clb;j++)
{
printf("enter element %d%d of matrix B",i,j);
scanf("%d",&b[i][j]);
}}
for (i=0;i<ra;i++)
{
for (j=0;j<clb;j++)
{
c[i][j]=0;
}}
for (i=0;i<ra;i++)
{
for (j=0;j<clb;j++)
{
for (k=0;k<rb;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}}}
for (i=0;i<ra;i++)
{
for (j=0;j<clb;j++)
{
printf("Element %d%d of new matrix is %d\n",i,j,c[i][j]);
}}
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
