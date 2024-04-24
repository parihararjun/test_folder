#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a[5],i,j,t,n;
n=5;
printf("%d",n);
printf("Enter the elements in array");
for(i=0;i<n;i++)
scanf("\n%d",&a[i]);
for(i=0;i<n;i++)
 {
	//comparisons
for(j=0;j<n-1;j++)
  {
   if(a[j]<a[j+1])
   { //swap
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
  }
 }
}
printf("After sorting\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch();
return 0;
}