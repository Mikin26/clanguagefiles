#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,a,b;
clrscr();
printf("the value of x is:");
scanf("%d",&x);
printf("the value of y is:");
scanf("%d",&y);
a=x-y;
b=a*a*a;
printf("the total value is:%d",b);
getch();
}