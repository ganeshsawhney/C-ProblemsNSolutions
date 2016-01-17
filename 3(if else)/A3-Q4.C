# include <stdio.h>
# include <conio.h>
void main()
{
float sp,cp,value;
clrscr();
printf("Specify CP");
scanf("%f",&cp);
printf("Specify SP");
scanf("%f",&sp);

if(cp>sp)
{
value=((cp-sp)*100)/cp;
printf("Loss is %f",value);
}
else
{
if(sp>cp)
{
value=((sp-cp)*100)/cp;
printf("Profit is %f",value);
}
else
{
printf("No Profit, No Loss");
}
}
getch();
}
