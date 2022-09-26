#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter the value of a:");
scanf("%c",&a);
if(a>='a'&& a<='z'|| a>='A'&& a<='Z')
{
printf("%c is an alphabet",a);
}
else if (a>='0'&& a<='9')
{
printf("%c is the digit",a);
}
else
{
printf("%c is the special char",a);
}
getch();
}