//reading current time  
#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
int main()
{
// current date and time on the current system
  time_t now = time(0);                 //now is object for time_t
   // convert now to string form
  string date_time = ctime(&now);
  cout<<"Current time is:"<<date_time;
}
