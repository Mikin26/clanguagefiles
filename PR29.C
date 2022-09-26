#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n;
clrscr();
	printf("enter the n:");
	scanf("%d",&n);
	do
	{
	 printf("%d",a);
	 a++;
	}while (a<=n);
getch();
}