#include <iostream>
#include "Dec2Bin.h"
#include "Bin2Dec.h"

/*int main()
{
	std::string input;
	std::cout<<"Zahl = ? ";
	std::cin>>input;
	
	Bin2Dec *bin;
	Dec2Bin *dec;
	
	switch (input.at(0)){
	case 'd':
		dec=new Dec2Bin(input.substr(2,input.length()));
		(*dec).convert();
		std::cout<<(*dec).GetBinary()<<std::endl;
		break;
	case 'b':
		bin=new Bin2Dec(input.substr(2,input.length()));
		(*bin).convert();
		std::cout<<(*bin).GetDecimal()<<std::endl;
		break;
	}
	
	return 0;
	
}*/
int main(int argc, char** argv)
{	
	Bin2Dec *bin;
	Dec2Bin *dec;
	if (argc>1){
	
		switch ((char)argv[1][0]){
		case 'd':
			dec=new Dec2Bin(argv[2]);
			(*dec).convert();
			std::cout<<(*dec).GetBinary()<<std::endl;
			break;
		case 'b':
			bin=new Bin2Dec(argv[2]);
			(*bin).convert();
			std::cout<<(*bin).GetDecimal()<<std::endl;
			break;
		}
	}
	else{
		std::string input;
		std::cout<<"Zahl = ? ";
		std::getline(std::cin, input);
	
		switch (input.at(0)){
		case 'd':
			dec=new Dec2Bin(input.substr(2,input.length()-1));
			(*dec).convert();
			std::cout<<(*dec).GetBinary()<<std::endl;
			break;
		case 'b':
			bin=new Bin2Dec(input.substr(2,input.length()-1));
			(*bin).convert();
			std::cout<<(*bin).GetDecimal()<<std::endl;
			break;
		}
	}
	
	
	return 0;
}
