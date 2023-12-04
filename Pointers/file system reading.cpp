//reading

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  // Create and open a text file
  ifstream finput("shubham.txt");           // ifstream -> for reading file  // finput is object for file
  string line;
  // read line by line
  while(getline(finput,line))
  {
  cout<<"\nLine is: "<<line;
  }
  // Close the file

  finput.close();

}