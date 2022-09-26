#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,n;
clrscr();
	printf("enter the n:");
	scanf("%d",&n);
	do
	{
	 if (a%2==0)
	 printf("%d\n",a);
	 a--;
	}while (a>=n);
getch();
}