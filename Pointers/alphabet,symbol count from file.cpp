#include <iostream>
#include <fstream>
using namespace std;

int main()
 {
	int wc=0,ac=0,dc=0,sc=0,lc=0;
  // Create and open a text file
  ifstream myFile("shubham.txt");
  string line;
  // read line by line
  while(getline(myFile,line))
  {
  // cout<<"\n"<<line;
   lc++;
   for(int i=0;i<line.length();i++)
    {
    	if(line[i]==' ')
    	   wc++;
    	else if((line[i]>='a'&& line[i]<='z')||(line[i]>='A'&& line[i]<='Z'))
    	   ac++;
    	else if(line[i]>='0'&& line[i]<='9')
    	   dc++;
    	else
    	   sc++;

	}
  }
  cout<<"Words:"<<wc+lc<<" Alpha:"<<ac<<"  Digits:"<<dc<<" Symbols:"<<sc<<" Lines"<<lc;


  // Close the file

  myFile.close();

}