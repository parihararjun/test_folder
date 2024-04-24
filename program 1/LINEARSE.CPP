#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
int a[]={11,45,67,89,2};
int n=5,i;
int item=11;
int flag=0;
for(i=0;i<n;i++)
{
if(item==a[i])
 {
   flag=1;
   break;
 }
}
if(flag==1)
{
printf("element found at position=%d",i);
}
else
{
printf("element not found");
}
getch();
return 0;
}