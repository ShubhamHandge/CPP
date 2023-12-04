// addition of two number


#include <iostream>
using namespace std;
void add(int no1,int no2)                //body--code refence &
{
  	cout<<no1<<"+"<<no2<<" = "<<(no1+no2);
}

int main()
{
    int no1,no2;
	cout<<"Enter two numbers: ";
	cin>>no1>>no2;
	
	cout<<"\naddition is: ";
   add(no1,no2);
}