/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
#include <stdio.h>
#include <conio.h>

void main()
{
int *v1,*v2,*temp1;
clrscr();
printf("Enter Variable 1\t");
scanf("%d",&*v1);
printf("Enter Variable 2\t");
scanf("%d",&*v2);
*temp1=*v1;
*v1=*v2;
*v2=*temp1;
printf("\nVariable 1 \t%d\nVariable 2 \t %d",*v1,*v2);
getch();
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
