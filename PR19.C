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
(a>b)?(a>c)?printf("%d Is the max number",a):printf("%d Is the max number",c):
(b>c)?printf("%d Is the max number",b):printf("%d Is the max numbe",c);
getch();
}