#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int num;
int fact=1;
printf("enter the number\n");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
fact=fact*i;
}
printf("factorial of= %d ",fact);

getch();
return 0;
}
																																																																																																																																