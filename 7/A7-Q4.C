/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1;
char chr,s1[100],s2[100];
clrscr();
printf("Enter string1\t");
gets(s1);
printf("Enter string2\t");
gets(s2);
printf("Enter Character to be checked in each case\t");
scanf("%s",&chr);
printf("Enter n for each case\t");
scanf("%d",&n);

a1=strlen(s1);
b1=strlwr(s1)                           ;
c1=strupr(s1)                            ;
d1=strcpy(s1,s2)                          ;
e1=strcat(s1,s2)                           ;
f1=strcmp(s1,s2)                            ;
g1=strrev(s1)                                ;
h1=strncpy(s1,  s2, n)                        ;
i1=strncat(s1,s2, n)                           ;
j1=strncmp(s1, s2, n)                           ;
k1=strcmpi(s1, s2) ;
l1=strnicmp(s1, s2,n)                            ;
m1=strset(s1, chr)                                ;
n1=strnset(s1, chr,n)                              ;

printf("strlen(s1) gives the result as %d\n",a1);
printf("strlwr(s1) gives the result as %d\n",b1);
printf("strupr(s1) gives the result as %d\n",c1);
printf("strcpy(s1,s2) gives the result as %d\n",d1);
printf("strcat(s1,s2) gives the result as %d\n",e1);
printf("strcmp(s1,s2) gives the result as %d\n",f1);
printf("strrev(s1) gives the result as %d\n",g1);
printf("strncpy(s1,  s2, n) gives the result as %d\n",h1);
printf("strncat(s1,s2, n) gives the result as %d\n",i1);
printf("strncmp(s1, s2, n) gives the result as %d\n",j1);
printf("strcmpi(s1, s2) gives the result as %d\n",k1);
printf("strnicmp(s1, s2,n) gives the result as %d\n",l1);
printf("strset(s1, chr) gives the result as %d\n",m1);
printf("strnset(s1, chr,n) gives the result as %d\n",n1);

getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */