/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<stdio.h>
#include<conio.h>
void main()
{
int nm,i,j,l,a[100];
clrscr();
printf("Enter no. of elements to be entered");
scanf("%d", &nm);
for (i=0;i<nm;i++)
{
printf("Enter a[%d]",i);
scanf("%d",&a[i]);
}

for (i=0;i<nm;i++)
{
for(j=i+1;j<nm;j++)
{
	if(a[i]==a[j])
	{
		for(l=j;l<nm;l++)
		{
		a[l]=a[l+1];
		}
		nm= nm-1;
		j=j--;
	}
	else
	{}
}
}
for(i=0;i<nm;i++)
{
printf("\n %d ",a[i]);
}
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
