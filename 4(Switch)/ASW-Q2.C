#include<stdio.h>
#include<conio.h>
void main()
{
float value,opr,n1,n2;
clrscr();
printf("enter operation | add-1,sub-2,mul-3,div-4,\n");
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

else if(opr==2)
{
printf("enter 1st no. \t");
scanf("%f",&n1);
printf("enter 2nd no. \t");
scanf("%f",&n2);
value = n1-n2;
printf("value is \t %f",value);
getch();
}

else if(opr==3)
{
printf("enter 1st no. \t");
scanf("%f",&n1);
printf("enter 2nd no. \t");
scanf("%f",&n2);
value = n1*n2;
printf("value is \t %f",value);
getch();
}

else if(opr==4)
{
printf("enter 1st no. \t");
scanf("%f",&n1);
printf("enter 2nd no. \t");
scanf("%f",&n2);
value = n1/n2;
printf("value is \t %f",value);
getch();
}
}