#include "Matrix.h"

Matrix::Matrix(unsigned int m,unsigned int n)
{
	(*this).m=m;
	(*this).n=n;
	(*this).matrix =new double[m*n];
	
}
Matrix::Matrix()
{
	
	
}
Matrix Matrix::add(Matrix B)
{
	if((*this).m==B.m&&(*this).n==B.n){
		Matrix ret((*this).m,(*this).n);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				ret(i,j)=(*this)(i,j)+B(i,j);
			}
		}
		return ret;
	}
	else return Matrix(0,0);
}
Matrix Matrix::mmult(Matrix B)
{
	if((*this).n==B.m){
		Matrix ret((*this).m,B.n);
		for(int i=0;i<ret.m;i++){
			for(int j=0;j<ret.n;j++){
				double cij=0;
				for (int k=0;k<(*this).n;k++)cij+=(*this)(i,k)*B(k,j);
				ret(i,j)=cij;
			}
		}
		return ret;
	}
	else return Matrix(0,0);
}
Matrix Matrix::smult(double s)
{
	Matrix ret((*this).n,(*this).m);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			ret(i,j)=(*this)(i,j)*s;
		}
	}
	return ret;
}
std::string Matrix::ausgabe()
{
	std::string s;
	for(int i=0;i<m;i++){
		s+='(';
		for(int j=0;j<n;j++){
			std::ostringstream strs;
			strs << (*this)(i,j);
			
			s+= strs.str();
			
			s+="\t";
		}
		s+=")\n";
	}
	
	return s;
}

