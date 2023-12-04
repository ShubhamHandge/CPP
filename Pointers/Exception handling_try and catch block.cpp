#include <iostream>
using namespace std;
int main()
{
  try {
	    int age ;
	    cout<<"\nEnter Your Age:";
	    cin>>age;
	    if (age >= 18)
		{
	      cout << "Access granted - you are old enough.";
	    }
		else
		{
	      throw (age);          //throw --->int/float/string/char *
	      cout<<"\nalla re alla";       // cout is not run in throw case
	    }
	  }
  catch (int myNum)             //catch --->int/float/string/char *
  {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;
  }
  cout<<"\nnormal code runs";
  return 0;
}
