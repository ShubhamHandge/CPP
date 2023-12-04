#include <iostream>
using namespace std;

int main()
{
	int i,j,space,s;
	char ia,ja;
	for(space=5,i=1,ia='A';space>=1 && i<=5 && ia<='E';space--,i++,ia++)
	{
		for(s=1;s<=space;s++)
		 cout<<" ";
		for(j=1;j<=i;j++)
			cout<<j;
		for(ja='A';ja<=ia;ja++)
			cout<<ja;

		cout<<"\n";
	}
} 