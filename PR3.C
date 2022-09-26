#include<stdio.h>
#include<conio.h>
void main()
{
char A;
int B;
float C;
clrscr();
printf("enter your character\n");
printf("enter your number\n");
printf("enter your float point\n");
scanf("%c%d%f",&A,&B,&C);
printf("your character is %c\n",A);
printf("your number is %d\n",B);
printf("your float point is %f\n",C);
if(A==A)
{
printf("you are OK");
}
else
{
printf("you are not OK");
}
getch();
}