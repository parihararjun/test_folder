#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int num=5;
int fib(int );
int val,i;
for(i=1;i<=num;i++)
printf("%d\n",fib(i));
//printf("%d ",val);
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