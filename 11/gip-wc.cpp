#include "ReadFile.h"
#include<cstdlib>
#include<cctype>
using namespace std;
int main(int argc, char** argv)
{
	bool w_flag, c_flag, l_flag;
	unsigned int w_count,c_count,l_count;
	
	w_flag=c_flag=l_flag=false;
	w_count=c_count=l_count=0;
	
	for(int i=1;i<argc-1;i++){	//-1, da letztes argument datei
		//std::cout<<i<<": "<<argv[i]<<std::endl;
		std::string temp=argv[i];
		//cout<<temp<<endl;
		if(temp.compare("-w")==0){
			w_flag=true;
			cout<<"-w"<<endl;
		}
		else if(temp.compare("-l")==0){
			l_flag=true;
			cout<<"-l"<<endl;
		}
		else if(temp.compare("-c")==0){
			c_flag=true;
			cout<<"-c"<<endl;
		}
		else {
			std::cout<<"Usage: gip-wc -w -l -c filename";
			std::exit(0);
		}
	}
	string datei=argv[argc-1];
	ReadFile F(datei);
	char last='a';
	while(!F.eof()){
	
	char c=F.GetChar();
	if(F.eof())break;
		c_count++;
		if (w_flag){
			if(isspace(c)&&!isspace(last)) w_count++;
		}
		if(l_flag){
			if(c=='\n')l_count++;
		}
		last=c;
		
	}
	
	if(l_flag)cout<<"l: "<<l_count<<" ";
	if(w_flag)cout<<"w: "<<w_count<<" ";
	if(c_flag)cout<<"c: "<<c_count;
	
	
	
	return 0;
}
