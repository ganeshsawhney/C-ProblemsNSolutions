/*Conditional operator*/ 
#include <stdio.h>
#include <conio.h>
void main(){ 
int a = 10, b = 11; 
int c;
c = ((a < b)? a : b);
printf("%d",c);
getch();
}