#include<stdio.h>
#include<conio.h>
int read();
int readi();
int sum(int a,int b);
void main()
{
int sumvv,sumcc,a,b,c,d,x,y;
clrscr();
a=read();
b=readi();
c=read();
d=readi();
sumvv=sum(a,c);
sumcc=sum(b,d);
x=mulx(a,b,c,d);
y=muly(a,b,c,d);
printf("\n\nComplex num are \n%d + i%d\n%d + i%d\t",a,b,c,d);
printf("\nSum is \n %d + i%d",sumvv,sumcc);
x=a*c-b*d;
y=a*d+b*c;
printf("\nMultiple is \n %d + i%d",x,y);

getch();
}

int read()
{
int a;
printf("Enter the value of a in {a+ib}\t");
scanf("%d",&a);
return(a);
}
int readi()
{
int b;
printf("Enter the value of b in {a+ib}\t");
scanf("%d",&b);
return(b);
}
int sum(int a,int b)
{
int sumv;
sumv=a+b;
return(sumv);
}
int mulx(int a, int b,int c,int d)
{
int xl;
xl=a*c-b*d;
return(xl);
}

int muly(int a, int b,int c,int d)
{
int yl;
yl=a*d+b*c;
return(yl);
}

