#include <iostream>
#include "rekurs.h"
using namespace std;


int main(){
	Rekursion rek;
	cout<<"ggT(1073741824,2)="<<rek.ggT_rekursiv(1073741824,2)<<endl;
	cout<<"ggT(7,2)="<<rek.ggT_iterativ(7,2)<<endl;
	cout<<"Fak(15)="<<rek.fakultaet_rekursiv(15)<<endl;
	cout<<"Fak(15)="<<rek.fakultaet_iterativ(15)<<endl;
	cout<<"Fib(21)="<<rek.fibonacci_rekursiv(21)<<endl;
	cout<<"Fib(21)="<<rek.fibonacci_iterativ(21)<<endl;
	return 0;
}

int Rekursion::ggT_rekursiv(int a, int b)
{
	if(b==0)return a;
	else return Rekursion::ggT_rekursiv(b, a%b);
}
int Rekursion::ggT_iterativ(int a, int b)
{
	int temp;
	while (b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
long int Rekursion::fakultaet_rekursiv( int n )
{
	if(n==0){
		return 1;
	}
	else return n*Rekursion::fakultaet_rekursiv(n-1);
}

long int Rekursion::fakultaet_iterativ( int n )
{
	long int ergebnis=1;
	while (n>1)ergebnis*=n--;
	return ergebnis;
}

int Rekursion::fibonacci_rekursiv(int n)
{
	switch(n)
	{
	case 0:
		return 0;
		break;
	case 1:
		return 1;
		break;
	default:
		return Rekursion::fibonacci_rekursiv(n-1)+Rekursion::fibonacci_rekursiv(n-2);
	}
}
int Rekursion::fibonacci_iterativ(int n)//0 1 1 2 3 5 8
{
	int ergebnis=0, n_minus_2=0, n_minus_1=1;
	if (n==0)return 0;
	else if (n==1)return 1;
	else{
		for(int i=1;i<n;i++)
		{
		
			ergebnis=n_minus_2+n_minus_1;
			n_minus_2=n_minus_1;
			n_minus_1=ergebnis;
		
			
			
		}
		return ergebnis;	
	}
		
	
}
