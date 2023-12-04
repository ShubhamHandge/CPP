// C++ program to illustrate the use
// of namespace with same name of
// function and variables
/*Need of namespace:
As the same name can’t be given to multiple variables, functions, classes, etc.
in the same scope.
So to overcome this situation namespace is introduced.*/
#include <iostream>
using namespace std;//allows us to use set of standard rules for naming and identifiers along with commands

// Namespace n1
namespace n1 {
int x = 2;

// Function to display the message 
// for namespace n1
void fun()
{
	cout << "This is fun() of n1"
		<< endl;
}
}

// Namespace n2
namespace n2 {

int x = 5;

// Function to display the message
// for namespace n2
void fun()
{
	cout << "This is fun() of n2"
		<< endl;
}
}

// Driver Code
int main()
{
	// The methods and variables called
	// using scope resolution(::)
	cout << n1::x << endl;
         //name space::identifier
	// Function call
	n1::fun();

	cout << n2::x << endl;

	// Function call;
	n2::fun();

	return 0;
}
