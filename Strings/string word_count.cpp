#include<iostream>
using namespace std;
int main()
{
	string line;
	int word_count=0;
	cout<<"Who are you ?:";
	getline(cin,line);
	cout<<"You are: "<<line;
	cout<<"\nYou Entered:"<<line.length()<<" characters";
	for(int i=0;i<line.length();i++)
	{
		if(line[i]==' ')
		  word_count++;
	}
	cout<<"Total words:"<<word_count+1;
}