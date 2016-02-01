# include<stdio.h>
# include<conio.h>
void prt(int x,char s1);
void main()
{
int num;
char st;
clrscr();
printf("Enter the number\t\t");
scanf("%d",&num);
printf("Enter the string\t\t");
scanf("%s",st);
printf("%s\n",st);
prt(num,st);
getch();
}

void prt(int x,char s1)
{
printf("%s\n",s1);
if(x>1)
{
prt(x-1,s1);
prt(x-1,s1);
}
}
