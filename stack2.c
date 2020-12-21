#include<stdio.h>
#include <stdlib.h>
#include "stack1.h"
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
         
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n top-> %d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
    
}
void isempty()
{
	if(top==-1)
	{
		printf("the stack is empty");
	}
	else
	{
		printf("the stack is not empty");
	}
}
void isfull()
{
	if(top==n-1)
	{
		printf("the stack is full");
	}
	else
	{
		printf("the stack is not full");
	}
}
void topmost()
{
	
	printf("the topmost element of stack is");
	printf("%d",stack[top]);
}
void dispose()
{
	printf("the stack is disposed");
	top=-1;
}
