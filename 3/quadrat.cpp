#include <iostream>
#include <cmath>

using namespace std;

double D;

bool diskrim(double a,double b,double c)
{
	D=b*b-4.0*a*c;
//	bool test= D >= 0;
//	return test;
	return D>=0;
}



int main()
{
	double a,b,c;
	
	cout<<"Quadratische Gleichung: ax²+bx+c=0"<<endl<<endl;
	cout<<"a=?"<<endl;
	cin>>a;
	cout<<"b=?"<<endl;
	cin>>b;
	cout<<"c=?"<<endl;
	cin>>c;
	
	if(a==0){												//Fall a=0 ==> bx+c=0 <=> x=-c/b
	cout<<"x="<<-c/b<<endl;
	}
	else{
		
		if(diskrim(a,b,c)){									//Fall a!=0&&D>=0
		
						
								
			double temp=(1.0/(2.0*a));						//Werte vorausberechnen um Rechenzeit zu sparen
			double temp1=-temp*b;							//Divisionen: 1, Multiplikationen: 3+4, Additionen: 2+1, Wurzel: 1
			double temp2=temp*sqrt(D);						//Aufwand: 5+4=9
			
			double x1=temp1+temp2;
			double x2=temp1-temp2;
			//double x1=(1.0/(2.0*a))(-b+sqrt(D));			//Divisionen: 2, Multiplikationen: 4+4, Additionen: 2+1, Wurzel: 1
			//double x2=(1.0/(2.0*a))(-b-sqrt(D));			//Aufwand: 7+4=11
	
			cout<<"x1 = "<<x1<<endl<<"x2 = "<<x2<<endl;
		}
		else{												//Fall a!=0&&D<0
			cout<<"Keine reellen Lösungen"<<endl;
		}
	}
	
	return 0;
}


