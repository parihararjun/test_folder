#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a[]={1,2,3,4,5}   ;
int size=sizeof(a);
int n=sizeof(a)/sizeof(a[0]);
printf("%d\n", size);
printf("%d\n",n);
getch();
return 0;
}