#include "bubblesort.h"


Bubblesort::Bubblesort()
{
	int testarray[]={9,3,5,6,1,7,2,0,8,4};
	for(int i=0;i<length;i++){
		array[i]=testarray[i];
	}
	dynam_array= new int[groesse];
	for(int i=0;i<groesse;i++){
		dynam_array[i]=std::rand()%100;
	}
}

void Bubblesort::swap(int i)
{
	if(i+1<length){
		int temp= array[i];
		array[i]=array[i+1];
		array[i+1]=temp;
	}

}
void Bubblesort::swap_dyn(int i)
{
	if(i+1<groesse){
		int temp= dynam_array[i];
		dynam_array[i]=dynam_array[i+1];
		dynam_array[i+1]=temp;
	}

}

void Bubblesort::sort()
{
	bool isSorted=true;
	for (int i=0;i<length;i++){
		if(array[i]>array[i+1]){
			this->swap(i);
			isSorted=false;
		}
	}
	this->print();
	if(!isSorted)this->sort();

}
void Bubblesort::sort_reverse()
{
	bool isSorted=true;
	for (int i=0;i<groesse;i++){
		if(dynam_array[i]<dynam_array[i+1]){
			this->swap_dyn(i);
			isSorted=false;
		}
	}
	this->print_dyn();
	if(!isSorted)this->sort_reverse();

}

void Bubblesort::print()
{
	for ( int i=0; i<length;i++){
		std::cout<<this->array[i]<<" ";
	}
	std::cout<<std::endl;

}
void Bubblesort::print_dyn()
{
	for ( int i=0; i<groesse;i++){
		std::cout<<this->dynam_array[i]<<" ";
	}
	std::cout<<std::endl;

}
