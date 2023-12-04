#include <iostream>
using namespace std;
int main()
{
	int no;
	cout<<"\nEnter no:";
	cin>>no;
    if(no%3==0 && no%5==0)
    {
    	cout<<no<<" Accepted";
	}
	else//default
	{
		cout<<no<<" is Rejected";
	}

}