/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

# include<stdio.h>
# include<conio.h>
void main()
{
int ttyl,lp,clyr;
float yr;
clrscr();
printf("specify the year");
scanf("%f",&yr);

clyr=yr-1900;
lp=clyr/4;
ttyl=clyr+lp;

if(ttyl%7==0)
{
printf("Day is Monday");
}
else if(ttyl%7==1)
{
printf("Day is tuesday");
}
else if(ttyl%7==2)
{
printf("Day is wednesday");
}
else if(ttyl%7==3)
{
printf("Day is thursday");
}
else if(ttyl%7==4)
{
printf("Day is friday");
}
else if(ttyl%7==5)
{
printf("Day is saturday");
}
else if(ttyl%7==6)
{
printf("Day is sunday");
}
getch();
}

/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */