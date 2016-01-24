/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<stdio.h>
#include<conio.h>
void main()
{
int i,temp,a[100],b;
clrscr();
printf("Enter total numbers to be entered");
scanf("%d", &b);
for (i=0;i<b;i++)
{
printf("Enter the element");
scanf("%d",&a[i]);
}
if(b%2==0)
{
	for(i=0;i<b/2;i++)
	{
	temp=a[i];
	a[i]=a[b-1-i];
	a[b-1-i]=temp;
	}
}
else if (b%2==1)
{
	for(i=0;i<(b-1)/2;i++)
	{
	temp=a[i];
	a[i]=a[b-1-i];
	a[b-1-i]=temp;
	}
}
for(i=0;i<b;i++)
{
printf("%d",a[i]);
}
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */