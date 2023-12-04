#include<iostream>
using namespace std;
// reversing Word -- pallendrom of word
int main()
{
	string full_name;

	cout<<"Enter your word: ";
	getline(cin,full_name);
	cout<<"reserse name ";
	
	for(int i=full_name.length();i>=0;i--)
	{
	cout<<full_name[i];
	}
	
	
}