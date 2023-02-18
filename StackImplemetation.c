#include<stdio.h>
int top=-1, size=10;
int rice_sacks[10];
void push();
void pop();
void disp();
 int main()
 {
 	int ch;
 	int flag=1;
 	while(flag!=0)
 	{
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1: 
 				push();
 				break;
 			case 2: 
 				pop();
 				break;
 			case 3:
 				disp();
 				break;
 			default:
 				flag=0;
 				break;
		 }
	 }
 }
 void push()
 {
 	int value;
 	if(top==size-1)
 	{
 		printf("The sack is full");
	 }
	else
	{
		scanf("%d",&value);
		rice_sacks[++top]=value;
	}
 }
 void pop()
 {
 	if(top==-1)
 	{
 		printf("The sack is empty");
	 }
	if(top<4)
	{
		printf("Please reorder the rice");
		
	}
	else
	{
		printf("%d",rice_sacks[top]);
		top--;
	}
 }
 void disp()
 {
 	if(top==-1)
 	{
 		printf("The sack is empty");
	 }
	else
	{
		int i;
		for(i=top;i>=0;--i)
		{
			printf("%d",rice_sacks[i]);
		}	
	}
 }
