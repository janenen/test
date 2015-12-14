#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
#include <string>
#include <sstream>
class Matrix{
	private:
		double *matrix;
		unsigned int m;
		unsigned int n;
		std::string ausgabe();
	public:
		Matrix(unsigned int,unsigned int);
		Matrix();
		Matrix add(Matrix);
		Matrix mmult(Matrix);
		Matrix smult(double);
		
			
		friend std::ostream& operator<<(std::ostream& os,Matrix &A) {
    		
    		return os<<A.ausgabe();
 		}
 		friend std::istream& operator>>(std::istream& is,Matrix &A){
 			int i,j;
 			std::cout<<"Zeilen =?"<<std::endl;
 			std::cin>>i;
 			std::cout<<"Spalten =?"<<std::endl;
 			std::cin>>j;
 			A= Matrix(i,j);
 			for(int a=0;a<i;a++){
 				for(int b=0;b<j;b++){
 				double temp;
 				std::cout<<a<<","<<b<<":?";
 				std::cin>>temp;
 				A(a,b)=temp;
 				}
 			}
 		}
 		
 		
 		Matrix operator+(Matrix &B){
 			return (*this).add(B);
 		}
 		Matrix operator*(Matrix &B){
 			return (*this).mmult(B);
 		}
 		Matrix operator*(const double &s){
 			return (*this).smult(s);
 		}
 		
 		double & operator()(const int &zeile, const int &spalte){
 			return matrix[zeile*(*this).n+spalte];
 		}
 		
 
};	

#endif
