#include <iostream>
using namespace std;
// create initials
int main()
{
	string full_name;
	cout<<"Enter your name: ";
	getline(cin,full_name);
	cout<<"You are: "<<full_name;
	cout<<"\nInitials are: "<<full_name[0]<<".";
	for(int i=0;i<full_name.length();i++)
	{
		if(full_name[i]==' ')
		cout<<full_name[i+1]<<".";
		
		
	}
	
} 
