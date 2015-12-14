#include <iostream>
#include <cstdio>
using namespace std;
void getZahlen(int *array,int n)
{
	for (int i=0; i<n;i++){
		cout<<"Zahl "<<i+1<<" = ? ";
		cin>>array[i];
//		cout<<endl;
	}

}

int berechne(int *array, int n, char op){
	int ergebnis=array[0];
	switch (op)
	{
		case 'a':
			for(int i=1;i<n;i++)ergebnis+=array[i];
			break;
		case 's':
			for(int i=1;i<n;i++)ergebnis-=array[i];
			break;
		case 'm':
			for(int i=1;i<n;i++)ergebnis*=array[i];
			break;
		case 'd':
			for(int i=1;i<n;i++){
				if(array[i]==0){
					cout<<"Zahl "<<i+1<<" = 0, bitte neue Zahl eingeben: ";
					cin>>array[i--];
					continue;
				}
				else ergebnis/=array[i];	
			}
			break;
	}
	return ergebnis;

}

int main()
{
	while(true){
		setbuf(stdin,NULL);
		int n;
		int ergebnis;
		char c;
		
		cout<<"Ihre Wahl?"<<endl;
		cout<<"a) Addition\t\ts) Subtraktion"<<endl;
		cout<<"m) Multiplikation\td) Division"<<endl;
		cout<<"e) Ende"<<endl;
	
		
		//cin>>c;
		c=getchar();
		
		if(c=='e')break;
		
		cout<<endl<<"Wieviele Zahlen?";
				cin>>n;
				int zahlen[n];
				getZahlen(zahlen,n);
		
		
		ergebnis=berechne(zahlen,n,c);
		
		switch(c)
		{
			
				
			case 'a':
				cout<<"Das Ergebnis der Addition: ";
				break;
			case 's':
				cout<<"Das Ergebnis der Subtraktion: ";
				break;
			case 'm':
				cout<<"Das Ergebnis der Multiplikation: ";
				break;
			case 'd':
				cout<<"Das Ergebnis der Division: ";
				break;
			
		}
		cout<<ergebnis<<endl<<endl;
	}
	cout<<"Beende"<<endl;
	return 0;
}
