/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<stdio.h>
#include<conio.h>
void main()
{
float value,opr,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
clrscr();
printf("enter operation | add-1,sub-2,mul-3,div-4,avg-5 \n");
scanf("%f",&opr);
if(opr==1)
{
printf("enter 1st no. \t");
scanf("%f",&n1);
printf("enter 2nd no. \t");
scanf("%f",&n2);
value = n1+n2;
printf("value is \t %f",value);
getch();
}

if(opr==2)
{
printf("enter 1st no. \t");
scanf("%f",&n1);
printf("enter 2nd no. \t");
scanf("%f",&n2);
value = n1-n2;
printf("value is \t %f",value);
getch();
}

if(opr==3)
{
printf("enter 1st no. \t");
scanf("%f",&n1);
printf("enter 2nd no. \t");
scanf("%f",&n2);
value = n1*n2;
printf("value is \t %f",value);
getch();
}

if(opr==4)
{
printf("enter 1st no. \t");
scanf("%f",&n1);
printf("enter 2nd no. \t");
scanf("%f",&n2);
value = n1/n2;
printf("value is \t %f",value);
getch();
}

if(opr==5)
{
printf("enter 1st no. \t");
scanf("%f",&n1);
printf("enter 2nd no. \t");
scanf("%f",&n2);
printf("enter 3 no. \t");
scanf("%f",&n3);
printf("enter 4 no. \t");
scanf("%f",&n4);
printf("enter 5 no. \t");
scanf("%f",&n5);
printf("enter 6 no. \t");
scanf("%f",&n6);
printf("enter 7 no. \t");
scanf("%f",&n7);
printf("enter 8nd no. \t");
scanf("%f",&n8);
printf("enter 9 no. \t");
scanf("%f",&n9);
printf("enter 10 no. \t");
scanf("%f",&n10);
     value=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;
printf("value is \t %f",value);
     getch();

}
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */