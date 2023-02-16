#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 100
char stack[SIZE];
int top=-1;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    if(top==-1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int opval(char a)
{
    if(a=='*' || a=='/')
    {
        return(2);
    }
    else if(a=='^')
    {
        return(3);
    }
    else if(a=='+' || a=='-')
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
int main()
{
    char infix[100];
    char *e,x;
    scanf("%s",infix);
    e=infix;
    while(*e!='\0')
    {
        if(isalnum(*e))
        {
            printf("%c",*e);
        }
        else if(*e=='(')
        {
            push(*e);
        }
        else if(*e==')')
        {
            while((x=pop()) !='(')
            {
                printf("%c",x);
            }
        }
        else
        {
            while(opval(stack[top]) >= opval(*e))
            {
                printf("%c",pop());
            }
            push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        printf("%c",pop());
    }
    return 0;
}
