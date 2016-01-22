/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<stdio.h>
#include<conio.h>
void main()
{
int num , sum=0 , i;
clrscr();
printf("Enter the no.");
scanf("%d",&num);
do
{
sum =sum + (num*num);
num=num--;
}
while(num>0);
printf("sum is %d", sum);
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */