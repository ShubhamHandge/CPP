//factorial of number

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
    cout<<"\nFactorial is:"<<fact(no);
}