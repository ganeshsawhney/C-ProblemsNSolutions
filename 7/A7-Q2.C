#include<stdio.h>
#include<conio.h>
void main()
{
int lth,i,j;
char s1[100];
clrscr();
printf("Enter String\t");
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
	if(s1[i]=='a' || 'A' ||'e' || 'E' ||'i' || 'I' ||'o' || 'O' ||'u' || 'U')
	{
		for(j=i;s1[j]!='\0';j++)
		{
		s1[j]=s1[j+1];
		}
	}
}
puts(s1);
getch();
}