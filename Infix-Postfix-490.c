#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char ch)
{
stack[++top]=ch;
}
char po()
{
return stack[top--];
}
int precedence(char ch)
{
if(ch=='^')
return3;
elseif(ch=='*'||ch=='/')
return2;
elseif(ch=='+'||ch=='-')
return1;
else
return 0;
}
int main()
{
char infix[MAX],postfix[MAX];
int i,j=0;
char ch;
printf("enter infix expression:");
scanf("%s",infix);
for(i=0;i<strlen(infix);i++)
{
ch=infix[i];
if(isalnum(ch))
{
elseif(ch=='(')
{
push(ch);
}
elseif(ch==')')
{
while(top!=-1&&stack[top]!='(')
{
postfix[j++]=pop();
}
pop();
}
else
{
while(top!=-1&&precedence(stack[top])>=precedence(ch))
{
postfix[j++]=pop();
}
push(ch);
}
}
while(top!=-1)
{
postfix[j++]=pop();
}
postfix[j]='\0';
printf("postfix expression:%s\n",postfix);
return 0;
}

