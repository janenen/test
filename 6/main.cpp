
#include "rechner2.h"

int main(int argc, char *argv[])
{
	//for(int i=0;i<argc;i++)std::cout<<argv[i]<<std::endl;
	Calculator c(argv[1]);
	//Calculator c("3 1 2+ 3*5+*");
	//Calculator c("2 + *");
	std::cout<<"Das Ergebnis ist: "<<c.compute()<<std::endl;
	
	return 0;
}
