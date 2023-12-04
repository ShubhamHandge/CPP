#include <iostream>
using namespace std;
class Human//base--super---gives properties
{
	private:
		string name,gender;
	public:
		void setHuman(string n,string g)
	    	{
	    		name=n;
	    		gender=g;
	    		cout<<"\nHuman:SetHuman activated";
			}
		void displayHuman()
		{
			cout<<"you are: "<<gender<<" called "<<name;
			cout<<"\nHuman:displayHuman activated";
		}
};
class Student:public Human//derrived--sub class
{
	private:
		string degree;
	public:
		void setDegree(string d)
		{
			degree=d;
			cout<<"\nSetDegree:Student activated:";
		}
		void displayinfo()
		{
			cout<<"\nStudent:Degree is: "<<degree;
		}
};
int main()
{
  Student s;//object of Sub Class---setdegree+display info
  s.setHuman("amar","male");//superclass method
  s.setDegree("Phd");//local
  s.displayHuman();	//inherited
  s.displayinfo();	//local

	return 0;
}
