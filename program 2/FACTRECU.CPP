#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int num=5;
int fact(int );
int val;
val=fact(num);
printf("factorial of= %d ",val);
getch();
return 0;
}
int  fact(int num)
{
if(num==0)
return 1;
else
return num*fact(num-1);
}