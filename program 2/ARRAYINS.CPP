#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a[]={11,12,13,17,19};
int n=5,i,j;
int item=56;
int item1=57;
int index=4;
int index1=5;
for(i=0;i<n;i++)
{
printf("elements of array  %d\n",a[i]);
}
for(j=n;j>index;j--)
{
a[j]=a[j-1];
}
a[j]=item;
printf("After insertion\n") ;
n=n+1;
printf("Second insertion");
for(j=n;j>index1;j--)
{
a[j]=a[j-1];
}
a[j]=item1;
n=n+1;
for(i=0;i<n;i++)
{
printf("elements of array  %d\n",a[i]);
}
getch();
return 0;
}