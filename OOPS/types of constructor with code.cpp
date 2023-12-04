 /*
Constructor:
-special function called on its own when object is created
-function with class's name itself without return type
-used for giving default values,user given values,make copy
  of exising object
  */
#include <iostream>
using namespace std;
class Human
{
  private:
  	string name,gender;

  public:
  	Human()//default constructor:set to default values
  	{
  		cout<<"\nHuman created: Default value constructor";
  		name="unnamed";
  		gender="unknown";
	  }
	Human(string name,string gender)
	//parameterized constructor:set to user given values
  	{
  		cout<<"\nHuman created: parameterized constructor";
  		this->name=name;
  		this->gender=gender;
	  }
	Human(Human &obj)//reference of object created
	//copy constructor:set parameters to values already set in passed object
	//makes duplicate copy of obj
  	{
  		cout<<"\nHuman created: copy constructor";
  		this->name=obj.name;
  		this->gender=obj.gender;
	  }
  void setHuman(string n ,string g)
  {
     name=n;
	 gender=g;
  }
  void displayHuman()
  {
  	cout<<"\nhi i am a "<<gender<<" called "<<name;
  }
};
int main()
{
	Human h1;//object of class Human defult constructor called
	h1.displayHuman();
	h1.setHuman("amar","male");//set
	h1.displayHuman();//display

	Human h2("superman","male");//parameterized constructor
    h2.displayHuman();//display

    Human h3(h1);//copy constructor
    h3.displayHuman();//display
}