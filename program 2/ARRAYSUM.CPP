#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a[5];
int i;
float avg,sum=0;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i=i+1)
{
printf("Values in array is a[%d]=%d\n",i,a[i] );
}
for(i=0;i<5;i++)
{
 sum=sum+a[i];
 }
 printf("sum=%f",sum);

getch();
return 0;
}