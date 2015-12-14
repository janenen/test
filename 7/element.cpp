#include "element.h"

Element::Element(int j){
	i=j;
	next=null;
}
Element::Element(Element *prev, int j)
{
	i=j;
	next=null;
	prev.next=(*this);
	
}
Element Element::getNext()
{
	return (*this).next;
}
int Element::getValue()
{
	return this->i;
}
