#include <iostream>
using namespace std;
int main()
{
	string line;
	int vovels_count=0;
	cout<<"Who are you ?:";
	getline(cin,line);
	cout<<"You are: "<<line;
	cout<<"\nYou Entered:"<<line.length()<<" characters";
	for(int i=0;i<line.length();i++)
	{
		if(line[i]=='A' ||line[i]=='a' ||line[i]=='E' ||line[i]=='e'||line[i]=='I'||line[i]=='i'||line[i]=='O'||line[i]=='o'||line[i]=='U'||line[i]=='u')
		  vovels_count++;
	}
	cout<<"Total vovles:"<<vovels_count;
}