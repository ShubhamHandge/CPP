//create a logging app that will store data with time stamp
//flow--will ask name-->if file not there create/else open
//one can write data till user give info when one want to stop give 
//EXIT_NOW command


#include <iostream>
#include<fstream>
#include <ctime>
using namespace std;
int main() 
{
  cout<<"Your Name please:";
  string name,data;
  cin>>name;
  ofstream myFile(name+".exe", ios::app);
  // current date and time on the current system
  time_t now = time(0);
   // convert now to string form
  string date_time = ctime(&now);
  myFile<<"Logged on: "<<date_time;
   do
   {
   	cout<<"\nYour line  >";
   	getline(cin,data);
   	if(data=="EXIT_NOW")
   	 {
   	  myFile<<"------------------------------------------\n";
      myFile.close();
   	  break;
	 }
	 else
	 {
	  myFile<<data<<"\n";
	 }
   }while(true);
}