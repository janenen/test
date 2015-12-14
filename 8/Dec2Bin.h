#ifndef __DEC2BIN_H__
#define __DEC2BIN_H__
#include <string>
class Dec2Bin{
	private:
	std::string decimal;	//input
	std::string binary;		//output
	bool converted;
	public:
	Dec2Bin(std::string);
	void convert();
	std::string GetBinary();
	
};
#endif
