#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a[]={11,12,13,17,19};
int n=5,i,j,k;
int index=3;
for(i=0;i<n;i++)
{
printf("elements of array  %d\n",a[i]);
}
for(j=index;j<n-1;j++)
{
a[j]=a[j+1];
}
printf("After deletion\n") ;
n=n-1;
for(k=0;k<n;k++)
{
printf("elements of array  %d\n",a[k]);
}
getch();
return 0;
}
