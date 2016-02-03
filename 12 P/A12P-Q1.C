#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char *str[12],*temp[12];
int i,j,ln;
clrscr();
printf("Enter String to be reversed\n");
gets(*str);
ln=strlen(*str) ;
for(i=0;*str[i]!='\0';i++)
{
*temp[ln-1-i]=*str[i];
}
puts(*temp);
getch();
}
