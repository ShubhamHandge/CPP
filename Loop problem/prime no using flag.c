#include <iostream>
using namespace std;
//prime
int main()
{
	int no,flag=1,i;
	cout<<"Enter a number:";
	cin>>no;
	for(i=2;i<no;i++)
	{
		cout<<i<<",";//for student only
		if(no%i==0)//if div perfectly then reset and stop
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	  cout<<"\n"<<no<<" yes it is prime";
	else
	  cout<<"\n"<<no<<" not a prime";
}