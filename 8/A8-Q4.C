#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int max,j,temp15,temp16,temp1,ttl,i,cde;
char temp12[100],temp13[100],temp14[100];
char test[10];

struct hotel
{
char name[100];
char ad[100];
char gr[100];
int chr;
int nm;
}e[100];
clrscr();
for(i=0;i<=10;i++)
{
printf("\nEnter name of Hotel  %d\t\t",i+1);
scanf("%s",e[i].name);
printf("\nEnter Adress of Hotel  %d\t\t",i+1);
scanf("%s",e[i].ad);
printf("\nEnter Grade of Hotel  %d\t\t",i+1);
scanf("%s",e[i].gr);
printf("\nEnter Avg room Charges \t\t");
scanf("%d",&e[i].chr);
printf("\nEnter total rooms\t");
scanf("%d",&e[i].nm);
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
if(e[i].chr>e[j].chr)
{
strcpy(temp12,e[i].name);
strcpy(e[i].name,e[j].name);
strcpy(e[j].name,temp12);

strcpy(temp13,e[i].ad);
strcpy(e[i].ad,e[j].ad);
strcpy(e[j].ad,temp13);

strcpy(temp14,e[i].gr);
strcpy(e[i].gr,e[j].gr);
strcpy(e[j].gr,temp14);

temp15=e[i].nm;
e[i].nm=e[j].nm;
e[j].nm=temp15;

temp16=e[i].chr;
e[i].chr=e[j].chr;
e[j].chr=temp16;


}}}


for(i=0;i<ttl;i++)
{
printf("\nname of Hotel  %d is\t\t",i+1);
puts(e[i].name);
printf("\nAdress of Hotel  %d is\t\t%s",i+1);
puts(e[i].ad);
printf("\nGrade of Hotel  %d is\t\t%s",i+1);
puts(e[i].gr);
printf("\nAvg room Charges of Hotel  %d is\t\t%d",i+1,e[i].chr);
printf("\ntotal rooms of hjotel %d is\t\t%d",i+1,e[i].nm);
}
printf("\nEnter max charges");
scanf("%d",&max);
for(i=0;i<ttl;i++)
{
if(e[i].chr<max)
{
printf("\nname of Hotel  %d is\t\t%s",i+1,e[i].name);
printf("\nAdress of Hotel  %d is\t\t%s",i+1,e[i].ad);
printf("\nGrade of Hotel  %d is\t\t%s",i+1,e[i].gr);
printf("\nAvg room Charges of Hotel  %d is\t\t%d",i+1,e[i].chr);
printf("\ntotal rooms of hjotel %d is\t\t%d",i+1,e[i].nm);
}
}
getch();
}