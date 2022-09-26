#include<stdio.h>
#include<conio.h>
void main()
{
int A,E;
const int B=10;
const int C=5;
const int D=8;
clrscr();
printf("The room temperature in degree celsius is:");
scanf("%d",&A);
E=A+(A*B)/100+(A*C)/100+(A*D)/100;
printf("The room temperature in Fahrenheit is:%d",E);
getch();
}