#include <iostream>
using namespace std;
//find minimum of 3 numbers

int main()
{
	float no1,no2,no3;
	cout<<"\nEnter 3 numbers\n";
	cin>>no1>>no2>>no3;
    if(no1<no2 && no1<no3)
    {
    	cout<<no1<<" is minimum";
	}
	else if(no2<no1 && no2<no3)
    {
    	cout<<no2<<" is minimum";
	}
	else if(no3<no1 && no3<no2)
    {
    	cout<<no3<<" is minimum";
	}
	else if(no1==no2 && no2==no3)
	{
		cout<<no1<<","<<no2<<","<<no3<<" all are equal";
	}
	else
	{
		cout<<"Not checked:";
	}

}