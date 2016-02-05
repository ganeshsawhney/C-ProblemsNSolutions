/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int max,j,temp13,temp14,temp15,temp1,ttl,i,cde;
char temp12[100];
char test[10];

struct std
{
char name[100];
int roll;
int class;
int marks;
}e[100];

clrscr();
for(i=0;i<=10;i++)
{
printf("\nEnter name of student  %d\t\t",i+1);
scanf("%s",e[i].name);
printf("\nEnter roll no \t\t");
scanf("%d",&e[i].roll);
printf("\nEnter class\t");
scanf("%d",&e[i].class);
printf("\nEnter marks\t");
scanf("%d",&e[i].marks);
printf("\nEnter 1 to enter more, Else enter 2\t\t");
scanf("%d",&temp1);
if(temp1==2)
{
ttl=i+1;
break;
}
}
for(i=0;i<ttl;i++)
{
for(j=i+1;j<ttl;j++)
{
if(e[i].marks>e[j].marks)
{
strcpy(temp12,e[i].name);
strcpy(e[i].name,e[j].name);
strcpy(e[j].name,temp12);

temp13=e[i].roll;
e[i].roll=e[j].roll;
e[j].roll=temp13;

temp14=e[i].class;
e[i].class=e[j].class;
e[j].class=temp14;

temp15=e[i].marks;
e[i].marks=e[j].marks;
e[j].marks=temp15;
}}}


for(i=0;i<ttl;i++)
{
printf("\nname of student  %d is\t\t",i+1);
puts(e[i].name);
printf("\nroll no. of student  %d is\t\t%d",i+1,e[i].roll);
printf("\nclass of student  %d is\t\t%d",i+1,e[i].class);
printf("\nmarks of student %d is\t\t%d",i+1,e[i].marks);
}
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
