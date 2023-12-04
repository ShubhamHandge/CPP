  
  // #custom exception

// create age exception that is raised if age<0
  
#include <iostream>
using namespace std;

class AgeException : public exception {
    public:
string message () {
        return "Age Exception Due to -ve age: ";
    }
};

int main() {
    try {
    	int age ;
	    cout<<"\nEnter Your Age:";
	    cin>>age;
	    if (age<=0 )
	      throw AgeException();                  //throw --->int/float/string/char *
	}
      catch (AgeException a) {
        cout << "Caught AgeException" << endl;
        cout << a.message();
    }
}