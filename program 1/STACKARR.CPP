#include<stdio.h>
#include<conio.h>
#define size 10
int stack[size] ;
int top=-1;
void push(int);
void pop();
void display();

void push(int item)
{
if(top==size-1)
{  printf("\nStack is full");

}
else
{
top=top+1;
stack[top]=item;
}
}

void pop()
{
 if(top==-1)
 {
 printf("\nStack  is empty" );
}
else
{
printf("\npop element is %d" ,stack[top]);
top=top-1;
}
}

void peek()
{
 if(top==-1)
 {
 printf("\nStack  is empty" );
 }
 else
 printf("\ntop element is %d" ,stack[top]);
}

void display()

{
    int i;
 for(i=top;i>=0; i--)
 {
 printf("\n%d",stack[i]);
 }
}

void empty()
{
 if(top==-1)
 {
 printf("stack is empty"  ) ;
 }
 else
 {
 printf("\n not empty" );
 }
 }





int main()
{
clrscr();

push(10);
push(14);
push(90);
display();
pop();
push(56);
push(67);
pop();
pop();
pop();
pop();
pop();

peek();
display();
push(900);
display();
getch();
return 0;
}