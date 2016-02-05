#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fp1,*fp2;
char str[100];
printf("ENter the string");
gets(str);
fp1=fopen("n:\\fh\\source.txt","w");
fprintf(fp1,"%s",str);
getch();
}