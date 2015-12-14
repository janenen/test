#include <iostream>
#include "Matrix.h"
int main()
{
	Matrix H;
	std::cin>>H;
	std::cout<<H<<std::endl;
	std::cout<<"Addition: "<<std::endl;
	Matrix A(2,3);
	A(0,0)=1;
	A(0,1)=2;
	A(0,2)=3;
	A(1,0)=4;
	A(1,1)=5;
	A(1,2)=6;
	
	
	Matrix B(2,3);
	B(0,0)=7;
	B(0,1)=8;
	B(0,2)=9;
	B(1,0)=10;
	B(1,1)=11;
	B(1,2)=12;
	
	std::cout<<A<<"+\n"<<B<<"=\n";
	//Matrix C=A.add(B);
	Matrix C=A+B;
	std::cout<<C<<std::endl;
	
	std::cout<<"Skalarmultiplikation: "<<std::endl;
	Matrix D(2,2);
	D(0,0)=1;
	D(0,1)=2;
	D(1,0)=3;
	D(1,1)=4;
	
	std::cout<<D<<"*5.1="<<std::endl;
	//Matrix E=D.smult(5.1);
	Matrix E=D*5.1;
	std::cout<<E<<std::endl;
	
	std::cout<<"Matrixmultiplikation: "<<std::endl;

	
	Matrix F(3,2);
	F(0,0)=6;
	F(0,1)=-1;
	F(1,0)=3;
	F(1,1)=2;
	F(2,0)=0;
	F(2,1)=-3;
	
	
	std::cout<<A<<"*\n"<<F<<"=\n";
	//Matrix G=A.mmult(F);
	Matrix G=A*F;
	std::cout<<G<<std::endl;
	
	return 0;
}
