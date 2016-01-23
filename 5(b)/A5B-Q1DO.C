/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<stdio.h>
#include<conio.h>
void main()
{
float s,e,div,i=0,prod;
clrscr();
printf("Enter starting value");
scanf("%f", &s);
printf("Enter ending value");
scanf("%f", &e);
printf("Enter divisor");
scanf("%f", &div);
do
{
prod = div * i;
i=i++;
if(prod>=s && prod<=e)
{
printf("%f",prod);
printf("\n");
}
else{;}
}
while(i<=e);
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */