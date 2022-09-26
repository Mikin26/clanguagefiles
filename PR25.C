#include<stdio.h>
#include<conio.h>
void main()
{
int a;
float b,s,t;
clrscr();
printf("the bill unit:");
scanf("%d",&a);
if (a<=50)
{
	b=a*0.50;
}
else if (a<=150)
{
	b=25+(100*0.75);
}
else if (a<250)
{
	b=100+(100*1.20);
}
else
{
	b=220+(100*1.50);
}
s=b*0.20;
t=b+s;
printf("total bill is Rs.%.2f",t);
getch();
}