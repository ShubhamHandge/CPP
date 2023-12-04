//writing
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	string fname;
    cout<<"\nEnter file name:";
    cin>>fname;
    // Create and open a text file
    ofstream MyFile(fname+".txt");
   //class    obj (file name paramenter)
   
   // Write to the file
    cout<<"Who are You ?";
    string name;
    cin>>name;
    MyFile <<"\nName: "<<name;

	  cout<<"\nWhere r u from ?";
	  string native;
	  cin>>native;
	  MyFile <<"\nNative is : "<<native;

	  string number;
	  cout<<"Number for contact: ?";
	  cin>>number;
	  MyFile <<"\nContact  is : "<<number;

	  // Close the file
	  MyFile.close();
	  cout<<"\nFile saved";
}