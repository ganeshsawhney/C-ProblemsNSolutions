/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
# include<stdio.h>
# include<conio.h>
int sum(int x);
void main()
{
int num,sm;
clrscr();
printf("Enter the number\t\t");
scanf("%d",&num);
sm=sum(num);
printf("\nSum is %d",sm);
getch();
}

int sum(int x)
{
int sm;
if(x<=0)
{
return (0);
}
else
{
sm=x+sum(x-1);
}
return (sm);
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
