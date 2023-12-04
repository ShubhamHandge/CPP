//Wap to calculate bio where bio=n! /(r!*(n-r)!)
//r,n are natural numbers.
//Use functions bio ()
#include <iostream>
using namespace std;
int fact(int no)
{
	int product=1,i;
	for (i=1;i<=no;i++)
	  {
	  	 product*=i;
	  }
	return product;
}
int main()
{
	int no;
	cout<<"Enter a number:\n";
	cin>>no;
	//option1 using var
	/*int ans=fact(no);
	cout<<"\nFactorial is:"<<ans;*/
	//option2 using cout
    cout<<"\nFactorial is:"<<fact(no);
}