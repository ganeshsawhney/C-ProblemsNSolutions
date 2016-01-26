/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
int i,nm,j;
clrscr();
printf("Enter no. of elements to be entered");
scanf("%d", &nm);

for (i=0;i<nm;i++)
{
printf("\nEnter a[%d]",i);
scanf("%s",&a[i]);
}

for (i=0;i<nm;i++)
{
if(i%2==0)
{
a[i]=a[0];
}
else if (i%2==1)
{
a[i]=a[nm-1];
}
}
for(i=0;i<nm;i++)
{
printf("\na[%d] is %c",i,a[i]);
}
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */