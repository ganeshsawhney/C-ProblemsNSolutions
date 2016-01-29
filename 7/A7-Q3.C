/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
void main()
{
int lth,i,j,dig=0,vwl=0,cnst=0,sp=0;
char s1[100];
clrscr();
printf("Enter String\t");
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
	if(s1[i]=='a' || s1[i]== 'A' || s1[i]=='e' || s1[i]== 'E' || s1[i]=='i' || s1[i]== 'I' || s1[i]=='o' || s1[i]== 'O' || s1[i]=='u' || s1[i]== 'U')
	{
	vwl=vwl+1;
	}
	else if ((s1[i]>=65 && s1[i]<=90) || (s1[i]>=97 && s1[i]<=122))
	{
	cnst=cnst+1;
	}
	if(s1[i]>='0' && s1[i]<='9')
	{
	dig=dig+1;
	}
	if(s1[i]==' ')
	{
	sp=sp+1;
	}
}
printf("Digits are %d\n",dig);
printf("Vowels are %d\n",vwl);
printf("Consonants are %d\n",cnst);
printf("Spaces are %d\n",sp);
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
