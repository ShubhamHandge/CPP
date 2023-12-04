//return min of 2 numbers using minimum()
#include <iostream>
using namespace std;
int minimum(int no1,int no2)
{
	if(no1<no2)
	 return no1;
	else
	 return no2;
}
int main()
{
	cout<<"minimum is:"<<minimum(1,50);
}