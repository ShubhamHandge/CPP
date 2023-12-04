#include <iostream>
using namespace std;
//153-->351
//rno=rno*10+digit  153--->3   o*10+3:3 --->5  3*10+5:35  ---->1  35*10+1:351
int main()
{
	int no,digit,sum=0,tno,rno=0;
	cout<<"Enter a number:";
	cin>>no;
	tno=no;
	while(no>0)
	{
		digit=no%10;//get last digit
		no=no/10;//removes last digit
		rno=rno*10+digit;
		cout<<"\nno:"<<no<<" digit: "<<digit<<" rno:"<<rno;
	}
	if(rno==tno)
	  cout<<"\n"<<tno<<" yes it is.";
	else
	  cout<<"\n"<<tno<<" no it is not";
}