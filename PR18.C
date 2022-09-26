#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("The value of a is:");
scanf("%d",&a);
printf("The value of b is:");
scanf("%d",&b);
printf("The value of c is:");
scanf("%d",&c);
printf("The value of d is:");
scanf("%d",&d);
printf("The value of e is:");
scanf("%d",&e);
if (a<b)
{
	if(a<c)
	{
			if (a<d)
			{
				if (a<e)
				{
				printf("%d Is the min number",a);
				}
				else
				{
				printf("%d Is the min number",e);
				}
			}
			else
			{
				if (d<e)
				{
				printf("%d Is the min number",d);
				}
				else
				{
				printf("%d Is the min number",e);
				}
			}													\
	}
	else
	{
		if (c<d)
		{
			if (c<e)
			{
			printf("%d Is the min number",c);
			}
			else
			{
			printf("%d Is the min number",e);
			}
		}
		else
		{
			if (d<e)
			{
			printf("%d Is the min number",d);
			}
			else
			{
			printf("%d Is the min number",e);
			}
		}
	}
}
else
{
	if (b<c)
	{
		if (b<d)
		{
			if (b<e)
			{
			printf("%d Is the min number",b);
			}
			else
			{
			printf("%d Is the min number",e);
			}
		}
		else
		{
			if (d<e)
			{
			printf("%d Is the min number",d);
			}
			else
			{
			printf("%d Is the min number",e);
			}
		}
	}
	else
	{
		if (c<d)
		{
			if (c<e)
			{
			printf("%d Is the min number",c);
			}
			else
			{
			printf("%d Is the min number",e);
			}
		}
		else
		{
			if (d<e)
			{
			printf("%d Is the min number",d);
			}
			else
			{
			printf("%d Is the min number",e);
			}
		}

	}
}
getch();
}