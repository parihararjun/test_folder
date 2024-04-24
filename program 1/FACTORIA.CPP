#include<stdio.h>
#include<conio.h>
int fact(int);


int main()
{
int num=5,val;
val=fact(num);
printf("factorial=%d",val);
getch();
return o;
}
 int fact(int n)
 {
 if(n==0)
 return 1;
 else
 return n*fact(n-1);
 }

