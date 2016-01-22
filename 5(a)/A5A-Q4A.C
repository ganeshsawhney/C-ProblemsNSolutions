/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,k,j,z;
clrscr();
for(i=0;i<=4;i++)
{
	for(j=4;j>i;j--)
	{
	printf(" ");
	}

	z=3*i;
	for(k=i;k<=z;k++)
	{
	printf("*");
	}
printf("\n");
}
getch();
}


/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */