/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
void main()
{
int temp1,ttl,i,code1;
struct empl
{
int code;
char t[100];
char an[20];
int pr;
int flag;
}e[100];
clrscr();
for(i=0;i<100;i++)
{
printf("\nEnter Code of Book %d\t\t",i+1);
scanf("%d",&e[i].code);
printf("\nEnter Title of Book %d\t\t",i+1);
scanf("%s",&e[i].t);
printf("\nEnter Author's Name for book %d\t\t",i+1);
scanf("%s",&e[i].an);
printf("\nEnter Price of Book %d\t\t",i+1);
scanf("%d",&e[i].pr);
printf("\nEnter 1 if Issued, Else enter 2");
scanf("%d",&e[i].flag);
printf("\n\nEnter 1 to enter more books, Else enter 2");
scanf("%d",&temp1);
if(temp1==2)
{
ttl=i;
break;
}
}

for(i=0;i<=ttl;i++)
{
printf("\n\nCode of Book %d is\t\t%d",i+1,e[i].code);
printf("\nTitle of Book %d is\t\t%s",i+1,e[i].t);
printf("\nAuthor's Name for book %d is\t\t%s",i+1,e[i].an);
printf("\nPrice of Book %d is\t\t%d",i+1,e[i].pr);
printf("\nIssued or not(1 if issued, Else 2) \t\t%d",i+1,e[i].flag);
}

printf("\n\nEnter Code fo comparison");
scanf("%d",&code1);

for(i=0;i<=ttl;i++)
{
if(e[i].code==code1)
{
	printf("%s\n",e[i].t);
}
}

printf("Total books are - %d",ttl+1);
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */