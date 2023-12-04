#include <iostream>
using namespace std;
int main()
{
	
	string line;
	int vovels=0;
	cout<<"Who you are?";
	getline(cin,line);
	cout<<"line entered by you is: "<<line;
	//cout<<"You entered "<<line.length()<<"character";
	
	for(int i=0;i<line.length();i++)
	{
		if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u')
		vovels++;
	}
	cout<<"Total vovels are:"<<vovels;
	
}