/*Educational Institute:

Problem Definition:

Create a base class Person
with attributes like name, address, and dateOfBirth
and methods like displayDetails().

Derive two subclasses from Person:
Student: Adds attributes like studentID, major, and methods like study().
Instructor: Adds attributes like employeeID, subjectTaught, and methods like teach().
Instantiate the Student and Instructor classes, set their attributes,
and invoke their methods to demonstrate the inheritance structure.
*/

 #include <iostream>
using namespace std;
class Person
{ protected:
	string name,address,DOB;
  public:
  	void SetPerson(string n,string a,string dob)
  	{
  		name=n;
  		address=a;
  		DOB=dob;
	}
	
	void displaydetails()
	{ 
	 	cout<<"\nName of person:"<<name<<"\t address is:"<<address<<"\t Date of birth is: "<<DOB;
    }
};

class Student:public Person
{
	private:
		int studentID;
		string major;

  public:
  	void SetStudent(int si, string m)
  	{
  	    studentID=si;
  	    major=m;
	}
	
	void study()
	{
		   	cout<<"\tStudenr ID is:"<<studentID<<"\t and stream of education is: "<<major;
	
	}
	
};

class Instructor:public Person
{
	private:
		int employeeID;
		string subject;
	public:
	   void SetInstructor(int empid,string s)
	   {
	   	
  		employeeID=empid;
  		subject=s;
  		
	   }
	   void teach()
	   {
	   	cout<<"\t Instructor is: "<<employeeID<<"\t and i'm teaching: "<<subject;
	   }
};
	   
int main() 
{
	Instructor i;
	Student s;
	cout<<"\nInformation of Instructor: ";
	i.SetPerson("abhi","mumbai","21/01/2023");
	i.SetInstructor(123,"math");
	i.displaydetails();
	i.teach();
	
	cout<<"\nInformation of Student: ";
	s.SetPerson("shubh","nashik","24/10/2013");
	s.SetStudent(12,"IT");
	s.displaydetails();
	s.study();
	
	
}