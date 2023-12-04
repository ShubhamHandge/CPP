#include <iostream>
using namespace std;
//leap if year is perfectly div by 4 but not by 100 
//or perfectly div by 400
int main()
{
	int year;
	cout<<"\nEnter year:";
	cin>>year;
    if((year%4==0 && year%100!=0)||(year%400==0))
    {
    	cout<<year<<" is leap";
	}
	else//default
	{
		cout<<year<<" is not leap";
	}

}