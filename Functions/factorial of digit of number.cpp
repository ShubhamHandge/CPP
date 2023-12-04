/*1. Strong Number:
• Input: 145
• Output: Yes (1! + 4! + 5! = 145)
*/
 

#include <iostream>
using namespace std;
int fact(int digit)
{
	int i,fac=1;
	for (i=1;i<=digit;i++)
	  {
	  	 fac=fac*i;
	  }
	return fac;  
}
int main()
{
	int no,digit,sum=0,tno;
	cout<<"Enter a number:";
	cin>>no;
	tno=no;
	while(no>0)
	{
		digit=no%10;
		sum=sum+fact(digit);
		no=no/10;
	}
	if(sum==tno)
	  cout<<tno<<" is strong Number";
	else
	  cout<<tno<<" is not strong Number";
}