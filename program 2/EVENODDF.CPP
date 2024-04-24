#include<stdio.h>
#include<conio.h>
void evenodd(int);
void evenodd(int num)
{
if(num%2==0)
{
printf("num is even\n");
}
else
{
printf("number is odd");
}
}
int main()
{
clrscr();
evenodd(45);
getch();
return 0;
}
