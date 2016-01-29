/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
struct empl
{
int code;
char name[10];
int date_d;
int date_m;
int date_y;
}e[100];
clrscr();
printf("How many values do u want to enter\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter code of employee%d\t",i+1);
scanf("%d",&e[i].code);
printf("\nEnter name of employee%d\t",i+1);
scanf("%s",&e[i].name);
printf("\nEnter date(day) of employee%d\t",i+1);
scanf("%d",&e[i].date_d);
printf("\nEnter date(month) of employee%d\t",i+1);
scanf("%d",&e[i].date_m);
printf("\nEnter date(year) of employee%d\t",i+1);
scanf("%d",&e[i].date_y);
}
for(i=0;i<n;i++)
{
if(e[i].date_y<2010)
{
printf("\n%d %s %d %d %d",e[i].code,e[i].name,e[i].date_d,e[i].date_m,e[i].date_y);
}

if(e[i].date_y==2010)
{
	
	if(e[i].date_m<10)
	{
	printf("\n%d %s %d %d %d",e[i].code,e[i].name,e[i].date_d,e[i].date_m,e[i].date_y);
	}
}

if(e[i].date_y==2010)
{
	
	if(e[i].date_m==10)
	{

		if(e[i].date_d<10)
		{	
		printf("\n%d %s %d %d %d",e[i].code,e[i].name,e[i].date_d,e[i].date_m,e[i].date_y);
		}
	}
}

}
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */