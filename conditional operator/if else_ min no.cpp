
// min number

#include <iostream>
using namespace std;

int main()
{
	float num1,num2,num3;
	cout<<"\nEnter three number:";
	cin>>num1>>num2>>num3;
    if(num1<num2 && num1<num3)
    {
    	cout<<num1<<" is minimun";
	}
	else if(num2<num1 && num2<num3)
    {
    	cout<<num2<<" is minimun";
	}
	else//default
	{
		cout<<num3<<"is minimun";
	}

}