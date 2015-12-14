
#include "bubblesort.h"

int main()
{
	Bubblesort bubble=Bubblesort();
	
	std::cout<<"statisches array, aufsteigend"<<std::endl;
	bubble.sort();
	
	std::cout<<std::endl<<"dynamisches array, absteigend"<<std::endl;
	bubble.sort_reverse();
	
	return 0;
}
