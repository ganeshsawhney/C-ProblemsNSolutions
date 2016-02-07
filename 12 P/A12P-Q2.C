/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int fun();
void main()
{
printf("%d",fun());
getch();
}
int fun()
{
char *str[12];
int x=1,i,j,ln;
clrscr();
printf("Enter String to be checked\n");
gets(*str);
ln=strlen(*str);
for(i=0;*str[i]!='\0';i++)
{
if(*str[i]==*str[ln-1-i])
{}
else
{
x=0;
break;
}
}
return (x);
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

