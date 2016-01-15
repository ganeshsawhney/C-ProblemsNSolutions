/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

# include<stdio.h>
# include<conio.h>
void main()
{
int y,x,num,sum=0,i;
clrscr();
printf("Specify the Number");
scanf("%d",&num);

for(i=1;i<=100;i++);
{
sum=sum+(num%10);
x=num/10;
num=x;
}
printf("Sum=%d",sum);
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */