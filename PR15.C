#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
if(a<b)
{
printf("%d Is the min number",a);
}
else
{
printf("%d Is the min number",b);
getch();
}