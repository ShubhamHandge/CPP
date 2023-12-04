//pass by value
#include <iostream>
using namespace std;
void welcome(string naam)//body--code
{
	cout<<"\n1.Welcome to CDAC: "<<naam<<" address:"<<&naam;
	naam="DR."+naam;
	cout<<"\n2.Welcome to CDAC: "<<naam<<" address:"<<&naam;
}

int main()
{
	cout<<"Enter your name:";
	string name;
	cin>>name;
	welcome(name);
    cout<<"\n:After call"<<name<<" address:"<<&name;
}
