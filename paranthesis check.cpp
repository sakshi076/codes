#include<iostream>
#include<string.h>
using namespace std;


class Stack
{
	private:
		char stk[20];
		int top;
	public:
		Stack()
		{
			top = -1;
		}
	void push(char);
	void pop();
	void checkbal(string);
};

void Stack::push(char item)
{
	stk[++top] = item;
}

void Stack::pop()
{
	char target;
	target = stk[top--];
}

void Stack::checkbal(string expression)
{
	int i=0;
	bool flag = true;
	do
	{	
		if((expression[i] == '{') || (expression[i] == '(') || (expression[i] == ')') || (expression[i] == '[') || (expression[i] == ']') || (expression[i] == '}'))
		{
		
			if(expression[i] == '(' || expression[i] == '[' || expression[i] == '{' )
			{
				push(expression[i]);
			}
			
			else if((expression[i] == ')' && stk[top] == '(') || (expression[i] == ']' && stk[top] == '[') || (expression[i] == '}' && stk[top] == '{') )
			{
				pop();
			}
			
			else
			{
				cout<<"\n Unbalanced expression\n";	
				flag = false;
				break;
			}
		}
		i++;
		
	}while(expression[i] != '\0');
	
	if(top == -1 && flag == true)
	{
	cout<<"\n Balanced expression\n";
	}  
	else if(top != -1 && flag == true)
	{
		cout<<"\n Unbalanced expression\n";	
	}
}

int main()
{
	int ch;
	string expression;
	Stack obj;
	bool signal;

	cout<<"\nEnter the expression : ";
	cin>>expression;
	obj.checkbal(expression);
	
					
			
}
