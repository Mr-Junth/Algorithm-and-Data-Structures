#include <stdio.h>
 
int stack[8];
int stacksize= 8;
int top=-1;
int peek()
{
	printf("%s\n","The element at the top of the Stack:");
	printf("%d\n",stack[top]);
}
int push(int data)
{
	if(top==stacksize)
	{
		printf("%s","Stack Overflow");
	}
	else
	{
		top=top+1;
		stack[top]=data;
		printf("%d\n",stack[top]);		
	}
}
int pop()
{
	int data;
	if(top==-1)
	{
		printf("%s","Empty Stack");
	}
	else
	{
		data=stack[top];
		top=top-1;
		printf("%d\n",data);
	}
 
}
 
//Function main begins program execution
int main(void) 
{
	// your code goes here
	//OPeration Push
	//Pushing elements on to the stack
	printf("%s","Enter the elements to be pushed on the Stack:\n");
	push(3);
	push(4);
	push(5);
	peek();
	printf("%s\n","The elements popped from the Stack:");
	pop();
	pop();
 
	return 0;
}