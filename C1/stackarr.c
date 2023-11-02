#include<stdio.h>
#include<stdlib.h>
#define max 10
int top=-1,s[max],n;
void push(int n)
{
if(top==max-1)
{
printf("the stack is overflow");
return;
}
else
{
top=top+1;
s[top]=n;
}
}
void pop()
{
int del;
if(top==-1)
{
printf("stack is underflow");
return;
}
else
{
del=s[top];
top=top-1;
}
}
void traverse()
{
int i;
if(top==-1)
printf("stack is underflow");
else
{
for(i=top;i>=0;i--)
printf("%d",s[i]);
}
}
int main()
{
int op,n;
do
{
printf("\n 1.push \n 2.pop \n 3.traverse \n 4.exit \n Enter your choice\n");
scanf("%d",&op);
switch(op)
{
case 1:
    printf("\n Enter any element to push :: ");
    scanf("%d",&n);
    push(n);
    break;
case 2:
    pop();
    break;
case 3:
    traverse();
    break;
case 4:

    exit(0);
    break;
    }
  }
   while(1);
return 0;
}         
