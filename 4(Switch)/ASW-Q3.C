/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

# include<stdio.h>
# include<conio.h>
void main()
{
char ch;
clrscr();
printf("specify the alphabet");
scanf("%c",&ch);
switch(ch)
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
	printf("It is a vowel");
	break;
default:
	printf("It is a not a vowel");
}
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
