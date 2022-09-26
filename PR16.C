#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("The value of a is:");
scanf("%d",&a);
printf("The value of b is:");
scanf("%d",&b);
printf("The value of c is:");
scanf("%d",&c);
if (a<b)
{
	if(a<c)
	{
	printf("%d Is the min value",a);
	}
	else
	{
	printf("%d Is the min value",c);
	}
}
else
{
	if (b<c)
	{
	printf("%d Is the min value",b);
	}
	else
	{
	printf("%d Is the min value",c);
	}
}
getch();
}


