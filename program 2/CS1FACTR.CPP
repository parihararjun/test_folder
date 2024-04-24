#include<stdio.h>
#include <conio.h>


int main()
{
clrscr();
int num=5;
int fact(int);
int val=fact(num);
printf("factorial of num=%d",val);
getch();
return 0;
}

int fact(int n)
{
if(n==0)
return 1;
else
return n*fact(n-1);
}
