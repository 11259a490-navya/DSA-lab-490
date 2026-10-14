#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
int value;
if(top==MAX-1)
{
printf("stack overflow\n");
}
else
{
printf("enter the element:");
scanf("%d",&value);
top++;
stack[top]=value;
printf("%d pushed into staack\n",value);
}
}
void pop()
{
if(top==-1)
{
printf("stack underflow\n");
}
else
{
printf("%d popped from stack\n", stack[top]);
top--;
}
}
void peek()
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("top element =%d\n",stack[top]);
}
}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("stack elements are:\n");
for(i=top; i>=0; i--)
{
printf("%d\n",stack[i]);
}
}
}
int main()
{
int choice;
while(1)
{
printf("\n---STACK using array---\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4.display\n");
printf("5.exit\n");
printf("enter your choice:");
scanf("%d", &choice);
switch(choice)
{
case 1:push();break;
case 2:pop();break;
case 3:peek();break;
case 4:display();break;
case 5:return 0;
default:
printf("invalid choice\n");
}
}
}
