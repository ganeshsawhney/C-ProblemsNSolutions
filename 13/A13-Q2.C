/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
# include <stdio.h>
# include <conio.h>

void main()
{
FILE *fpe,*fpo;
int a[10],temp,i,num;
clrscr();
for(i=0;i<10;i++)
{
printf("Enter the input integer %d\t\t",i);
scanf("%d",&a[i]);
printf("To enter more press 0 else 1\t\t");
scanf("%d",&temp);
if(temp==1)
{
num=i;
break;
}
}
fpo=fopen("n:\\fh\\odd.txt","w");
fpe=fopen("n:\\fh\\even.txt","w");
for(i=0;i<=num;i++)
{
if(a[i]%2==0)
{
fprintf(fpe,"%d",a[i]);
}
else
{
fprintf(fpo,"%d",a[i]);
}
}
fclose(fpo);
fclose(fpe);
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
