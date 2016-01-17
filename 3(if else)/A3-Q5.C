/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

# include <stdio.h>
# include <conio.h>
void main()
{
int day;
clrscr();
printf("Specify the Days");
scanf("%d",&day);

if(day<=5)
{
printf("Fine is 50 paise");
}
else
{
	if(day<=10 && day>=6)
	{
	printf("Fine is 1 Rupee");
	}
	else
	{
		if(day>10 && day<=30)
		{
		printf("Fine is 5 Rupees");
		}
		else
		{
		printf("Membership Cancelled");
		}
	}
}
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
