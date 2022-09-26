#include<stdio.h>
#include<conio.h>
void main()
{
long int x,y,z,a,b;
clrscr();
printf("the value of x is:");
scanf("%ld",&x);
printf("the value of y is:");
scanf("%ld",&y);
printf("the value of z is:");
scanf("%ld",&z);
a=x+y+z;
b=a*a*a;
printf("the total value is:%ld",b);
getch();
}