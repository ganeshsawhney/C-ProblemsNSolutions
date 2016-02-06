/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
#include<string.h>

int *func(char,char *);

void main()
{
char s1,*str;
clrscr();
printf("Enter the character\t\t");
scanf("%c",&s1);
printf("Enter the string\t\t");
scanf("%s",str);
func(s1,str);
getch();
}


int *func(char s1,char *str)
{
int num,ln,i,j;
ln=strlen(str);
for(i=0;i<100;i++)
{
if(*(str+i)==s1)
{
for(j=i;j<=ln;j++)
{
*(str+j)=*(str+j+1);
}
}
else
{
break;
}
}
printf("String corrected is %s",str);
return (0);
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
