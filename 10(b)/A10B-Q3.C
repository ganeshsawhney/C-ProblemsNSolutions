/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y=0,i,j,sl1,sl2;
char s1[10],s2[10];
clrscr();
printf("Enter string 1");
gets(s1);
printf("Enter string 2");
gets(s2);
sl1=strlen(s1);
sl2=strlen(s2);
for(i=0;i<sl1;i++)
{
x=0;
	for(j=0;j<sl2;j++)
	{
		if(s1[i]==s2[j])
		{
		x=x+1;
		}
	}
	if(x<=0)
	{
	printf("Not anagram");
	y=1;
	break;
	}
}
if(y==0)
{
printf("Anagram");
}
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
