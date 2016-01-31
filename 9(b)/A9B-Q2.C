# include<stdio.h>
# include<conio.h>
void val();
void main()
{
int num,t1=0,t2=1;
clrscr();
printf("Enter the number\t");
scanf("%d",&num);
printf("\n%d %d",t1,t2);
val(num);
getch();
}
void val(int nm)
{
int i=1,t2=1,t1=0,t3;
while(i<=nm-2)
{
t3=t1+t2;
printf(" %d",t3);
t1=t2;
t2=t3;
i++;
}}