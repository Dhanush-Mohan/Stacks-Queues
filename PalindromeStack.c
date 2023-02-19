#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
char stack[size];
int top=-1;
void push(char a)
{
	if(top==size-1)
	{
		printf("\nStack Overflow");
	}
	else
	{
		stack[++top]=a;
	}
}
char pop()
{
	if(top==-1)
	{
		printf("\nStack Underflow");
	}
	else
	{
		return stack[top--];
	}
}
int main()
{
	char s[100];
	int i;
	int flag;
	printf("Enter the string: ");
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		push(s[i]);
	}
	for(i=0;i<strlen(s);i++)
	{
		if(pop()==s[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("\nNot a Palindrome");
	}
}
