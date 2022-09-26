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
	(a>b)?(a>c)?(a>d)?(a>e)?printf("%d Is the max number",a):
	printf("%d Is the max number",e):
	(d>e)?printf("%d Is the max number",d):
	printf("%d Is the max number",e):
	(c>d)?(c>e)?printf("%d Is the max number",c):
	printf("%d Is the max number",e):
	(d>e)?printf("%d Is the max number",d):
	printf("%d Is the max number",e):
	(b>c)?(b>d)?(b>e)?printf("%d Is the max number",b):
	printf("%d Is the max number",e):
	(d>e)?printf("%d Is the max number",d):
	printf("%d Is the max number",e):
	(c>d)?(c>e)?printf("%d Is the max number",c):
	printf("%d Is the max number",e):
	(d>e)?printf("%d Is the max number",d):
	printf("%d Is the max number",e);
getch();
}
