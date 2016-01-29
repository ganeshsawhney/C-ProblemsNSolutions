#include <stdio.h>
#include <conio.h>
void main()
{
char c[100],ch;
int i,count=0;
printf("Enter a string: ");
gets(c);
printf("Enter a characeter to find frequency: ");
scanf("%c",&ch);
for(i=0;c[i]!='\0';++i)
{
if(ch==c[i])
count=count+1;
}
printf("Frequency of %c = %d", ch, count);
getch();
}