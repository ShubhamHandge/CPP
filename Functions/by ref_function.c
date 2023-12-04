//pass by reference
#include <iostream>
using namespace std;
void welcome(string &naam)//body--code refence &
{
	cout<<"\n1.Welcome to CDAC: "<<naam<<" address is:"<<&naam;
	naam="DR."+naam;
	cout<<"\n2.Welcome to CDAC: "<<naam<<" address is:"<<&naam;
}

int main()
{
	cout<<"Enter your name:";
	string name;
	cin>>name;
	welcome(name);
    cout<<"\n:After call: "<<name<<" address is:"<<&name;
}
