#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
if(a>=0)
{
printf("%d It is the positive number",a);
}
else
{
printf("%d It is the negative number",a);
}
getch();
}
