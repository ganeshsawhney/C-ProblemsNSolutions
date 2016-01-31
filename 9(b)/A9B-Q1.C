/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
# include<stdio.h>
# include<conio.h>
int vwl();
void main()
{
int val;
clrscr();
val=vwl();
printf("\nValue returned is\t%d",val);
getch();
}
int vwl()
{
char b[100] ,word;
int i , ttl,value=0,temp1;
for(i=0;i<100;i++)
{
printf("\nEnter %d character\t",i+1);
scanf("%s",b[i]);
printf("\n to Enter more press 1 else 2\t");
scanf("%d",&temp1);
if(temp1==2)
{
ttl=i;
break;
}
}
printf("\nEnter char to check\t");
scanf("%s",word);
for(i=0;i<=ttl;i++)
{
if(b[i]==word)
{
value=1;
break;
}
}
return(value);
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */