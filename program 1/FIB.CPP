#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int num=5;
int fib(int );
int val;
val=fib(num);
printf("factorial of= %d ",val);
getch();
return 0;
}
int  fib(int num)
{
if(num==0||num==1)
return num;
else
return fib(num-1)+fib(num-2);
}