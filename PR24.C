#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
	printf("Enter the value of a:");
	scanf("%c",&a);
	switch (a)
	{
	case 'm':
		printf("monday");
		break;
	case 't':
		printf("tuesday");
		break;
	case 'w':
		printf("wednesday");
		break;
	case 'h':
		printf("thursday");
		break;
	case 'f':
		printf("friday");
		break;
	case 's':
		printf("saturday");
		break;
	case 'u':
		printf("sunday");
		break;
	default:
		printf("invalid char");
	}
getch();
}