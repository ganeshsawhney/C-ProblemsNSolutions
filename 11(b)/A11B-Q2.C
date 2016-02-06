/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
char *name;
int ln;
char *cp=name;
clrscr();
printf("Enter String\t");
scanf("%s",name);

while(*cp!='\0')
{
cp++;
}
ln=cp-name;
printf("Length is \t%d",ln);
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
