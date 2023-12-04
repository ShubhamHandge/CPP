1#include <iostream>
using namespace std;
// armstrong number
int main()
{
	int no,digit,sum=0,tno;
	cout<<"Enter a number:";
	cin>>no;
	tno=no;
	while(no>0)
	{
		digit=no%10;//get last digit
		no=no/10;//removes last digit
		sum=sum+digit*digit*digit;
		//cout<<"\nno:"<<no<<" digit:"<<digit;
	}
	if(sum==tno)
	  cout<<tno<<" is armstrong";
	else
	  cout<<tno<<" is not armstrong";
}