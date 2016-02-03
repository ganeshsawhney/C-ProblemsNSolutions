#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int *a,num,temp,i,j,ln;
clrscr();
for(i=0;i<100;i++)
{
printf("Enter integer %d\n",i);
scanf("%d",a+i);
printf("To enter more press 0 else 1");
scanf("%d",&ln);
if(ln==1)
{
num=i;
break;
}
}

for(i=0;i<=num;i++)
{
for(j=i;j<=num;j++)
{
if(*(a+i)>*(a+j))
{
temp=*(a+i);
*(a+i)=*(a+j);
*(a+j)=temp;
}}}

printf("Sorted integer are \n");

for(i=0;i<=num;i++)
{
printf("%u\t",*(a+i));
}

getch();
}
