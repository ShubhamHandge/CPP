#include <iostream>
using namespace std;

int main()
{
	int i,j,space,s,k,l;
	
		for(i=5,space=1,k=5;i>=1 && space<=5 && k>=1;i--,space++,k--)
		
	{
		
		for(j=1;j<=i;j++)
			cout<<"X";
			
		for(s=3;s<=space*2;s++)
		 cout<<" ";
		
		
		for(l=1;l<=k;l++)
			cout<<"X";
			
		cout<<"\n";
	}
	
	for(i=1,space=5,k=1;i<=5 && space>=1 && k<=5;i++,space--,k++)
	{
		
		for(j=1;j<=i;j++)
			cout<<"X";
			
		for(s=3;s<=space*2;s++)
		 cout<<" ";
		
		
		for(l=1;l<=k;l++)
			cout<<"X";
			
			

		cout<<"\n";
	}
}