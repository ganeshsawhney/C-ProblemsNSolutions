#include<stdio.h>
#include<conio.h>

void main()
{

FILE *fp1,*fp2,*fp3;
int a[10],b[10],c[20],temp1,num1,num2,temp,i,j,ln;
clrscr();
fp1=fopen("n:\\fh\\data1.txt","w");
for(i=0;i<100;i++)
{
printf("Enter integer of data1 %d\n",i);
scanf("%d",&a[i]);
fprintf(fp1,"%d",a[i]);
printf("To enter more press 0 else 1");
scanf("%d",&temp1);
if(temp1==1)
{
num1=i;
break;
}
}
fclose(fp1);

fp2=fopen("n:\\fh\\data2.txt","w");
for(i=0;i<100;i++)
{
printf("Enter integer of data2 %d\n",i);
scanf("%d",&b[i]);
fprintf(fp2,"%d",b[i]);
printf("To enter more press 0 else 1");
scanf("%d",&temp1);
if(temp1==1)
{
num2=i;
break;
}
}
fclose(fp2);

for(i=0;i<=num1;i++)
{
c[i]=a[i];
}
for(i=0;i<=num2;i++)
{
c[i+num1+1]=b[i];
}


for(i=0;i<=num2+1+num1;i++)
{
for(j=i;j<=num2+1+num1;j++)
{
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}}}
fp3=fopen("n:\\fh\\data3.txt","w");
for(i=0;i<=num2+num1+1;i++)
{
fprintf(fpe,"%d",c[i]);
}
fclose(fp3);

getch();
}