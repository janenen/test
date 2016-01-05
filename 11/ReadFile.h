#include<iostream>
#include<fstream>
#include<string>

class ReadFile {
	std::string filename;
	std::fstream file;
	public:
	ReadFile(std::string f)
	{
		filename = f;
		try {
			file.open(filename.c_str(), std::fstream::in | std::ios::binary );
		}
		catch( ... ) { std::cout << "Datei␣existiert␣nicht!\n"; }
	}
	~ReadFile() { file.close();}
bool eof(){ return file.eof(); }
char GetChar() {
char c = file.get();
if (!file.eof()) return c;
}
};
