#ifndef __RECHNER2_H__
#define __RECHNER2_H__

#include <stack>
#include <string>
#include <iostream>
#include <cctype>

class Calculator{
	private:
	std::stack<int> Stack;
	std::string expr;
	bool check_expression();
	
	public:
	Calculator(std::string);
	int compute(void);
	void print_stack();
	
	
	
};

#endif
