#ifndef __BIN2DEC_H__
#define __BIN2DEC_H__
#include <string>
class Bin2Dec{
	private:
	std::string binary;
	int decimal;
	bool converted;
	public:
	Bin2Dec(std::string);
	void convert();
	int GetDecimal();

};
#endif
