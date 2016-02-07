/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char *str[12],*temp[12];
int i,j,ln;
clrscr();
printf("Enter String to be reversed\n");
scanf("%s",str);
ln=strlen(str) ;
for(i=0;*str[i]!='\0';i++)
{
*temp[i]=*str[ln-i-1];
}
*temp[i+1]='\0';
printf("%s",temp);
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
