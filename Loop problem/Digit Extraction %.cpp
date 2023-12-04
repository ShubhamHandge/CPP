#include <iostream>
using namespace std;
//0,1,1,2,3,5,8, ......nth term
int main()
{
	int no,digit;
	cout<<"Enter a number:";
	cin>>no;
	while(no>0)
	{
		digit=no%10;//get last digit
		no=no/10;//removes last digit
		cout<<"\nno:"<<no<<" digit:"<<digit;
	}
}