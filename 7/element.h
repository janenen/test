#ifndef __ELEMENT_H__
#define __ELEMENT_H__
class Element{
	private:
	int i;
	Element *next;
	public:
	Element(int);
	Element(Element&, int);
	Element	getNext(void);
	int getValue();
};
#endif
