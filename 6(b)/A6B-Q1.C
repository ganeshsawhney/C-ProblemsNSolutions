/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,c,a[100][100];
clrscr();
printf("Enter no. of rows to be entered");
scanf("%d", &r);
printf("Enter no. of columns to be entered");
scanf("%d", &c);
for (i=0;i<(r*c);i++)
{
for (j=0;j<(r*c);j++)
{
printf("Enter a[%d][%d]",i,j);
scanf("%d",&a[i][j]);
}
}

for (i=0;i<(r*c);i++)
{
for (j=0;j<(r*c);j++)
{
printf("Element a[%d][%d] is %d\n",i,j,a[i][j]);
}
}
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
