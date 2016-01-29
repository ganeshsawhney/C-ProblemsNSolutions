#include<stdio.h>
#include<conio.h>
void main()
{
int j,temp13,temp1,temp,ttl,i,cde;
char temp12;
struct empl
{
char nm;
int age;
int tm;
int run;
}e[20];

clrscr();

for(i=0;i<=20;i++)
{
printf("\nEnter name of cricketer %d\t\t",i+1);
scanf("%s",&e[i].nm);
printf("\nEnter age of cricketer %d\t\t",i+1);
scanf("%d",&e[i].age);
printf("\nEnter number of test matches played by cricketer %d\t\t",i+1);
scanf("%d",&e[i].tm);
printf("\nEnter avg run scored in each test match %d\t\t",i+1);
scanf("%d",&e[i].run);
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
for(j=i;j<ttl;j++)
{
if(e[i].run>e[j].run)
{
temp12=e[i].nm;
e[i].nm=e[j].nm;
e[j].nm=temp12;

temp13=e[i].age;
e[i].age=e[j].age;
e[j].age=temp13;

temp13=e[i].tm;
e[i].tm=e[j].tm;
e[j].tm=temp13;

temp13=e[i].run;
e[i].run=e[j].run;
e[j].run=temp13;


}}}


for(i=0;i<ttl;i++)
{
printf("\n\nname of cricketer %d is\t\t%s",i+1,e[i].nm);
printf("\nage of cricketer %d is\t\t%d",i+1,e[i].age);
printf("\nnumber of test matches played by cricketer %d is\t\t%d",i+1,e[i].tm);
printf("\navg run scored in each test match %d is\t\t%d",i+1,e[i].run);
}

getch();
}