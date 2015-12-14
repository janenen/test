#include "Bin2Dec.h"

Bin2Dec::Bin2Dec(std::string binary)
{
	(*this).binary=binary;
	converted=false;
}
void Bin2Dec::convert()
{

	for (int i=0; i< binary.length(); i++)decimal=2*decimal+ (int)(binary.at(i)-'0');
	
	converted=true;
}

int Bin2Dec::GetDecimal()
{
	if(converted)return decimal;
}
