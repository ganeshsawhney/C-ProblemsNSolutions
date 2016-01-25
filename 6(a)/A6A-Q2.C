#include<stdio.h>
#include<conio.h>
void main()
{
int i,nm,or,j,a[100];
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
for (j=i+1;j<nm;j++)
{
if(a[i]>a[j])
{
or=a[i];
a[i]=a[j];
a[j]=or;
}
else
{}
}}
for(i=0;i<nm;i++)
{
printf("%d",a[i]);
}
getch();
}