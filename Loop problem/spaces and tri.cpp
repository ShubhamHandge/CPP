#include <iostream>
using namespace std;

int main()
{
	int i,j,space,s;
	for(i=1,space=5;i<=5 && space>=1;i++,space--)
	{
		for(s=1;s<=space;s++)
		 cout<<" ";
		for(j=1;j<=i;j++)
			cout<<"X"; //cout<<"X ";             if we give space after X can print equilateral triangle

		cout<<"\n";
	}
}