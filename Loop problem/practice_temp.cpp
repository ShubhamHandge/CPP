#include<iostream>
using namespace std;
int main()
{
	char i,j;
	int space,s,k,l;
	for(space=5,k=1 ,i='A';space>=1 && k<=5 && i<='E' ;space--,k++,i++)
	{  
	    for(s=1; s<=space ;s++)
       	{
			cout<<" ";		
		}
	
	
	
     	for(l=1; l<=k ;l++)
  		{
			cout<<l;		
		}
		
		
		for(j='A'; j<=i ;j++)
		{
			cout<<j;		
		}
		cout<<"\n";
	}	
	
	
}