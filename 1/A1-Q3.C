# include<stdio.h>
# include<conio.h>
void main()
{
float root1,root2,root,a,b,c;
clrscr();
printf("Let Equation be \t ax^2 + bx + c");
printf("\n \n Give value of a \t");
scanf("%f",&a);
printf("\n Give value of b \t");
scanf("%f",&b);
printf("\n Give value of c \t");
scanf("%f",&c);
root=(b*b)-(4*a*c);
if(root>=0)
{
printf("Roots are real");
root=pow(root,1/2);
root1=(root - b)/(2*a);
root2=(-root - b)/(2*a);
printf("Root-1 is \t %f",root1);
printf("Root-2 is \t %f",root2);
}
else
{
printf("Roots are not real i.e. are Imaginary");
root=pow(root,1/2);
printf("\n Root-1 is \t ");
printf("- %f",b);
printf("+ i* %f",root);
a=2*a;
printf("/ %f",a);
printf("\n Root-2 is \t ");
printf("- %f",b);
printf("- i* %f",root);
a=2*a;
printf("/ %f",a);
}
getch();
}