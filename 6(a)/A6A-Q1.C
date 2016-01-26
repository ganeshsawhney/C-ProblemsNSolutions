/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,sz,j,y,or,ck,a[100];
clrscr();
printf("Enter Size");
scanf("%d", &sz);
for (y=0;y<sz;y++)
{
printf("Enter a[%d]",y);
scanf("%d",&a[y]);
}
for (i=0;i<sz;i++)
{
for (j=0;j<sz;j++)
{
if(i==j)
{;
}
else
{
	if(a[i]>a[j])
	{;
	}
	else
	{
	a[i]=0;
	}
}}
}
for(i=0;i<sz;i++)
{
if(a[i]>0)
{
printf("Largest is %d",a[i]);
}
else
{}
}
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */