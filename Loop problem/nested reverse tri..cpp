#include <iostream>
using namespace std;
/*
X
X X
X X X
X X X X
X X X X X
X X X X
X X X
X X
X
   */
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	   for(j=1;j<=i;j++)
		{
			cout<<"X ";//cout<<i%2;//cout<<j%2<<" ";//cout<<j<<" ";//cout<<i<<" ";//
		}
		cout<<"\n";
    }
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"X ";//cout<<i%2;//cout<<j%2<<" ";//cout<<j<<" ";//cout<<i<<" ";//
		}
		cout<<"\n";
   	}
}