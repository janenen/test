#include <iostream>
#include "test.h"
using namespace std;

int main()
{
	cout<<"Hallo Welt 1337"<<endl;
	test neu;
	neu.setI(3);
	cout<<neu.getI()<<endl;
	return 0;
}
