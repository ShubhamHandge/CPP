//power series

#include<iostream>
using namespace std;
int power(int x,int n)
{
	if(n==0)
    	return 1;
	else
		return(x*power(x,n-1));
}
int main()
{
int x,n;
cout<<"Enter two numbers: ";
cin>>x>>n;

cout<<"\nresult is : " <<power(x,n);
}