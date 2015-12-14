#include "Dec2Bin.h"

Dec2Bin::Dec2Bin(std::string decimal)
{
	(*this).decimal=decimal;
	converted=false;
}

void Dec2Bin::convert()
{
	int tmp=0;
	for(int i=0;i<decimal.length();i++)tmp=tmp*10+(decimal.at(i)-'0');
	while (tmp>0)
	{
		if(tmp%2)binary.insert(0,"1");
		else binary.insert(0,"0");
		tmp/=2;
	}
	converted=true;
}

std::string Dec2Bin::GetBinary()
{
	if(converted)return binary;
}
