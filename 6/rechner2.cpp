#include "rechner2.h"

Calculator::Calculator(std::string s)
{
	
	expr=s;
	
}

int Calculator::compute()
{
	int acc=0;
	bool parse_flag=false;
	if(!check_expression())
	{
		std::cout<<"Ausdruck inkorrekt!"<<std::endl;
		return 0;
	}
	else std::cout<<"Ausdruck korrekt!"<<std::endl;
	for(int i=0;i<expr.size();i++){
		
		
		if(std::isdigit(expr[i])){
			acc=acc*10+expr[i]-'0';
			parse_flag=true;
		}
		else if((std::isspace(expr[i])||std::ispunct(expr[i]))&&parse_flag){
		Stack.push(acc);
		//std::cout<<"Push "<<acc<<std::endl;
		acc=0;
		parse_flag=false;
		print_stack();
		}
		if(std::ispunct(expr[i])){
		//char c=expr[i];
			int temp1, temp2;
			
			temp1=Stack.top();
			Stack.pop();
			
			temp2=Stack.top();
			Stack.pop();
		
			switch(expr[i]){
				
				case '+':
					Stack.push(temp1+temp2);
					break;
				case '*':
					Stack.push(temp1*temp2);
					break;
				case '/':
					Stack.push(temp1/temp2);
					break;
				case '-':
					Stack.push(temp1-temp2);
					break;
			}
			print_stack();
			
		}
		
		
		
		
	}
	return Stack.top();
}
void Calculator::print_stack()//call by value
{
	std::stack<int>s=Stack;
	//cout<<RodNames.find(&t)->second<<": ";
	while(!s.empty()){
		std::cout<<s.top()<<" ";
		s.pop();
	}
	std::cout<<std::endl;
}
bool Calculator::check_expression()
{
	int ziffer=0, op=0;
	bool parse_flag=false;
	for(int i=0;i<expr.size();i++){
		if(std::isdigit(expr[i])){
			parse_flag=true;
		}
		else if(std::isgraph(expr[i])&&parse_flag){
			ziffer++;
			op++;
			parse_flag=false;
		}
		else if(std::isspace(expr[i])&&parse_flag){
			ziffer++;
			parse_flag=false;
		}
		
		else if(std::isgraph(expr[i])){
			op++;
		}
		
		std::cout<<expr[i]<<" ; "<<ziffer<<" ; "<<op<<std::endl;
	}
	return ziffer==(op+1);
}
