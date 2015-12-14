#ifndef __BUBBLESORT_H__
#define __BUBBLESORT_H__

#include <iostream>
#include <cstdlib>

//#include "element.h"

class Bubblesort{
	private:
	static const int length=10;
	int array[length];
	
	static const int groesse=20;
	int *dynam_array;
	
	void swap(int i);
	void swap_dyn(int i);
	
	public:
	Bubblesort();
	void sort(void);
	void sort_reverse(void);
	void print(void);
	void print_dyn(void);
	
};

#endif
