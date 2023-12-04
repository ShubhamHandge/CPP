// swap 


#include <iostream>
using namespace std;
void swap(int &a,int &b)                //body--code refence &
{
  	int temp=a;
	a=b;
	b=temp;
	
}

int main()
{
    int a=10,b=20;
    
	cout<<"swap before:"<<"a= "<<a<<" "<<"b="<<b;
	swap(a,b);
   cout<<"\nafter swap :"<<"a= "<<a<<" "<<"b="<<b;}
