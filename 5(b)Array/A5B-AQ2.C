#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,b,z[100],a[100];
clrscr();
printf("Enter total numbers to be entered");
scanf("%d", &b);
for (j=b-1,i=0 ; j>=0,i<b ; i++,j--)
{
printf("Enter the element");
scanf("%d",&a[i]);
z[j]=a[i];
}

for(j=0;j<b;j++)
{
printf("%d",z[j]);
}
getch();
}