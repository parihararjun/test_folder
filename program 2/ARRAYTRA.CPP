#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a[5];
int i;
int sum=0;
printf("enter the values in array\n");
for( i=0; i<5;i++)
{
scanf("%d",&a[i]);
}
for( i=0; i<5;i++)
{
printf("the value in array is %d\n",a[i]);
}
for( i=0; i<5;i++)
{
sum=sum+a[i];
}
printf("the sum of array elemnets is = %d",sum);
getch();
return 0;
}