# include<stdio.h>
# include<conio.h>
char vwl(char a);
void main()
{
char ch;
char val;
clrscr();
printf("specify the alphabet");
scanf("%c",&ch);
val= vwl(ch);
if(val=='y')
{
printf("Vowel");
}
getch();
}
char vwl(char a)
{
char value;
switch(a)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
	value='y';
	break;
default:
	value='n';
}
return(value);
}