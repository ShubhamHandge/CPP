#include <iostream>
using namespace std;
//read percentage and print passing class
// p>=60:first class     
// 60>p>=50:second class
//50>p>=40:pass class
//p<40:better luck next time
int main()
{
	float p;
	cout<<"\nEnter Percentage:";
	cin>>p;//77
    if(p>=60)
    {
    	cout<<p<<" is first class";
	}
	else if(p>=50)
    {
    	cout<<p<<" is second class";
	}
	else if(p>=40)
    {
    	cout<<p<<" is pass class";
	}
	else//default
	{
		cout<<p<<" next time plz";
	}

}