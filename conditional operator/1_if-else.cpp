#include <iostream>
using namespace std;
int
main ()
{
  int no;
  cout << "\nEnter no:";
  cin >> no;
  if (no < 0)
    {
      cout << no << " -ve";
    }
  else
    {
      cout << no << " +ve";
    }

}
