# include <stdio.h>
# include <conio.h>

void main()
{
FILE *fp;
int a,b,c,a1,b1,c1;
clrscr();
fp=fopen("n:\\fh\\INPUT.txt","w");
printf("Enter the input integers a,b,c\t\t");
scanf("%d %d %d",&a,&b,&c);
fprintf(fp,"%d %d %d",a,b,c);
fclose(fp);
fp=fopen("n:\\fh\\INPUT.txt","r");
fscanf(fp,"%d %d %d",&a1,&b1,&c1);
fclose(fp);
printf("Output is %d\t%d\t%d\t",a1,b1,c1);
getch();
}


