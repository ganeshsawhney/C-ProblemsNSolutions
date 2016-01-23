/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<stdio.h>
#include<conio.h>
void main()
{
float z,sub,e=1,i,num,fact=1;
clrscr();
for(num=1;num>0;num++)
{
	for(i=num;i>=1;i--)
	{
	fact=fact*i;
	}
z=e+(1/fact);
sub=z-e;
if(sub<=0.00001)
{
printf("e= %f",z);
break;
}
else
{
e=z;
}
}
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */