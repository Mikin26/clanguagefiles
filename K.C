#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("enter the number a is:");
scanf("%c",&a);
//printf("enter the number b is:\n");
//scanf("%c",&b);
if (a>='A' && a<='Z'|| a>='a'&& a<='z')
{
printf("you have entered char");
}
else if(a>='0' && a<='9')
{
printf("you have entered number:%c",a);
}
else
{
printf("you have entered special char");
}
getch();
}